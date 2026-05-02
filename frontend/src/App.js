import { useState, useEffect, useCallback } from "react";
import Editor from "@monaco-editor/react";
import axios from "axios";
import "./App.css";

const BACKEND_URL = process.env.REACT_APP_BACKEND_URL || "http://localhost:5000";

const SAMPLES = {
  "Factorial": `public class Main {\n    static int factorial(int n) {\n        if (n == 0) return 1;\n        return n * factorial(n - 1);\n    }\n    public static void main(String[] args) {\n        System.out.println(factorial(10));\n    }\n}`,
  "Fibonacci": `public class Main {\n    static int fib(int a, int b, int n) {\n        if (n == 1) return b;\n        return fib(b, a + b, n - 1);\n    }\n    public static void main(String[] args) {\n        System.out.println(fib(0, 1, 10));\n    }\n}`,
  "Bubble Sort": `public class Main {\n    static void bubbleSort(int[] arr, int n) {\n        for (int i = 0; i < n-1; i++)\n            for (int j = 0; j < n-i-1; j++)\n                if (arr[j] > arr[j+1]) {\n                    int temp = arr[j];\n                    arr[j] = arr[j+1];\n                    arr[j+1] = temp;\n                }\n    }\n    public static void main(String[] args) {\n        int[] arr = new int[5];\n        arr[0]=64; arr[1]=34; arr[2]=25; arr[3]=12; arr[4]=22;\n        bubbleSort(arr, 5);\n        for (int i = 0; i < 5; i++) System.out.println(arr[i]);\n    }\n}`,
  "Binary Search": `public class Main {\n    static int binarySearch(int[] arr, int x, int n) {\n        int low = 0, high = n - 1;\n        while (low <= high) {\n            int mid = (low + high) / 2;\n            if (arr[mid] == x) return mid;\n            else if (arr[mid] < x) low = mid + 1;\n            else high = mid - 1;\n        }\n        return -1;\n    }\n    public static void main(String[] args) {\n        int[] arr = new int[5];\n        for (int i = 0; i < 5; i++) arr[i] = i + 1;\n        System.out.println(binarySearch(arr, 3, 5));\n        System.out.println(binarySearch(arr, 10, 5));\n    }\n}`,
  "Knapsack": `public class Main {\n    static int max(int a, int b) { return (a > b) ? a : b; }\n    static int knapSack(int W, int wt[], int val[], int n) {\n        if (n == 0 || W == 0) return 0;\n        if (wt[n-1] > W) return knapSack(W, wt, val, n-1);\n        return max(val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));\n    }\n    public static void main(String[] args) {\n        int val[] = new int[3];\n        val[0]=60; val[1]=100; val[2]=120;\n        int wt[] = new int[3];\n        wt[0]=10; wt[1]=20; wt[2]=30;\n        System.out.println(knapSack(50, wt, val, 3));\n    }\n}`,
  "Prime Numbers": `public class Main {\n    public static void main(String[] args) {\n        int n = 10, count = 1, num = 3;\n        while (count < n) {\n            boolean isPrime = true;\n            for (int i = 3; i <= num; i += 2) {\n                if (i*i > num) break;\n                if ((num/i)*i == num) { isPrime = false; break; }\n            }\n            if (isPrime) count++;\n            num += 2;\n        }\n        System.out.println(num - 2);\n    }\n}`
};

const LOADING_STEPS = [
  "Lexing tokens...",
  "Parsing AST...",
  "Semantic analysis...",
  "Generating 3AC IR...",
  "Emitting x86-64 ASM...",
  "Linking & executing...",
];
 
export default function App() {
  const [code, setCode] = useState(SAMPLES["Factorial"]);
  const [output, setOutput] = useState("");
  const [loading, setLoading] = useState(false);
  const [error, setError] = useState(false);
  const [selectedSample, setSelectedSample] = useState("Factorial");
  const [loadingStep, setLoadingStep] = useState(0);
  const [compileTime, setCompileTime] = useState(null);
  const [copied, setCopied] = useState(false);

  const handleCompile = useCallback(async () => {
    setLoading(true);
    setOutput("");
    setError(false);
    setCompileTime(null);
    setLoadingStep(0);
    const start = Date.now();

    const interval = setInterval(() => {
      setLoadingStep(prev => (prev + 1) % LOADING_STEPS.length);
    }, 400);

    try {
      const res = await axios.post(`${BACKEND_URL}/api/compile`, { code });
      setOutput(res.data.output || "(no output)");
      setError(false);
      setCompileTime(((Date.now() - start) / 1000).toFixed(2));
    } catch (err) {
      setOutput(err.response?.data?.error || "Compilation failed");
      setError(true);
    } finally {
      clearInterval(interval);
      setLoading(false);
    }
  }, [code]);

  useEffect(() => {
    const handler = (e) => {
      if ((e.ctrlKey || e.metaKey) && e.key === 'Enter') {
        e.preventDefault();
        handleCompile();
      }
    };
    window.addEventListener('keydown', handler);
    return () => window.removeEventListener('keydown', handler);
  }, [handleCompile]);

  const handleCopy = () => {
    navigator.clipboard.writeText(output);
    setCopied(true);
    setTimeout(() => setCopied(false), 2000);
  };

  const handleSampleChange = (e) => {
    setSelectedSample(e.target.value);
    setCode(SAMPLES[e.target.value]);
    setOutput("");
    setError(false);
    setCompileTime(null);
  };

  return (
    <div className="app">
      <nav className="navbar">
        <div className="navbar-brand">
          compil<span className="brand-her">HER</span>
        </div>
        <div className="navbar-meta">
          <span className="badge">Java → x86-64</span>
          <a href="https://github.com/narrative26/compilher" target="_blank" rel="noreferrer" className="github-link">GitHub</a>
        </div>
      </nav>

      <main className="main">
        <div className="toolbar">
          <div className="sample-selector">
            <label>Examples</label>
            <select value={selectedSample} onChange={handleSampleChange}>
              {Object.keys(SAMPLES).map(s => <option key={s} value={s}>{s}</option>)}
            </select>
          </div>
          <div className="toolbar-right">
            <span className="shortcut-hint">Ctrl+Enter to run</span>
            <button className={`compile-btn ${loading ? "loading" : ""}`} onClick={handleCompile} disabled={loading}>
              {loading ? <><span className="spinner" />{LOADING_STEPS[loadingStep]}</> : "▶ Run"}
            </button>
          </div>
        </div>

        <div className="workspace">
          <div className="editor-pane">
            <div className="pane-header">
              <span className="dot red" /><span className="dot yellow" /><span className="dot green" />
              <span className="pane-title">Main.java</span>
            </div>
            <Editor height="100%" language="java" theme="vs-dark" value={code} onChange={(val) => setCode(val || "")}
              options={{ fontSize: 14, fontFamily: "'Roboto Mono', monospace", minimap: { enabled: false }, scrollBeyondLastLine: false, padding: { top: 16 }, lineNumbers: "on", renderLineHighlight: "all", cursorBlinking: "smooth" }} />
          </div>

          <div className="output-pane">
            <div className="pane-header">
              <span className="dot red" /><span className="dot yellow" /><span className="dot green" />
              <span className="pane-title">output</span>
              <div className="pane-actions">
                {compileTime && <span className="compile-time">{compileTime}s</span>}
                {output && <span className={`status-badge ${error ? "status-error" : "status-ok"}`}>{error ? "error" : "success"}</span>}
                {output && !error && <button className="copy-btn" onClick={handleCopy}>{copied ? "copied!" : "copy"}</button>}
              </div>
            </div>
            <div className={`output-content ${error ? "output-error" : ""}`}>
              {loading ? (
                <div className="loading-animation">
                  <div className="loading-bar"><div className="loading-fill" /></div>
                  <span className="loading-text">{LOADING_STEPS[loadingStep]}</span>
                </div>
              ) : output ? (
                <pre>{output}</pre>
              ) : (
                <div className="output-placeholder">
                  <span>Press ▶ Run or Ctrl+Enter to compile</span>
                </div>
              )}
            </div>
          </div>
        </div>

        <footer className="footer">
          <span>Built with Flex · Bison · C++ · x86-64 ASM</span>
          <span>Supports a subset of Java 17</span>
        </footer>
      </main>
    </div>
  );
}