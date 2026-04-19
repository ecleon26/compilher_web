const express = require('express');
const router = express.Router();
const { exec } = require('child_process');
const fs = require('fs');
const path = require('path');
const { v4: uuidv4 } = require('uuid');

const COMPILER_PATH = path.join(__dirname, '../compiler/WCTC.o');
const ALLOC_PATH = path.join(__dirname, '../compiler/allocmem.s');
const PRINT_PATH = path.join(__dirname, '../compiler/print_func.s');
const TEMP_DIR = path.join(__dirname, '../temp');
const TIMEOUT_MS = 10000;

if (!fs.existsSync(TEMP_DIR)) { fs.mkdirSync(TEMP_DIR, { recursive: true }); }

router.post('/', async (req, res) => {
    const { code } = req.body;
    if (!code || code.trim() === '') return res.status(400).json({ error: 'No code provided' });
    const jobId = uuidv4();
    const javaFile = path.join(TEMP_DIR, jobId + '.java');
    const tacFile = path.join(TEMP_DIR, jobId + '.tac');
    const asmFile = path.join(TEMP_DIR, jobId + '.s');
    const objFile = path.join(TEMP_DIR, jobId + '.o');
    const execFile = path.join(TEMP_DIR, jobId);
    try {
        fs.writeFileSync(javaFile, code);
        await runCommand(COMPILER_PATH + ' -i ' + javaFile + ' -t ' + tacFile + ' -s ' + asmFile, TIMEOUT_MS);

        let asmContent = fs.readFileSync(asmFile, 'utf8');
    asmContent = asmContent.replace(/\.asciz,/g, '.asciz');
asmContent = asmContent.replace(/movq\s+\$60,\s+%rax[\s\S]*?syscall/g, 'xor %rdi, %rdi\ncall exit\n');
        const printContent = fs.readFileSync(PRINT_PATH, 'utf8');
        const allocContent = fs.readFileSync(ALLOC_PATH, 'utf8');
        asmContent = asmContent + '\n' + printContent + '\n' + allocContent;
        fs.writeFileSync(asmFile, asmContent);

        await runCommand('gcc -c ' + asmFile + ' -o ' + objFile, TIMEOUT_MS);
        await runCommand('gcc -no-pie ' + objFile + ' -o ' + execFile + ' -lc', TIMEOUT_MS);
       const outFile = path.join(TEMP_DIR, jobId + '.out');
await runCommand('bash -c "' + execFile + ' > ' + outFile + ' 2>&1"', TIMEOUT_MS);
const output = fs.existsSync(outFile) ? fs.readFileSync(outFile, 'utf8') : '';
cleanup([javaFile, tacFile, asmFile, objFile, execFile, outFile]);
return res.json({ success: true, output: output.trim() });
    } catch (err) {
        cleanup([javaFile, tacFile, asmFile, objFile, execFile]);
        return res.status(400).json({ success: false, error: err.message || 'Compilation failed' });
    }
});

function runCommand(cmd, timeout) {
    return new Promise((resolve, reject) => {
        const { execSync } = require('child_process');
        try {
            const result = execSync(cmd, { timeout, encoding: 'utf8', stdio: ['pipe', 'pipe', 'pipe'] });
            resolve(result);
        } catch (err) {
            reject(new Error(err.stderr || err.message));
        }
    });
}
function cleanup(files) {
    files.forEach(f => { try { if (fs.existsSync(f)) fs.unlinkSync(f); } catch (_) {} });
}

module.exports = router;