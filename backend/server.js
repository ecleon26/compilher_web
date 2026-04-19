const express = require('express');
const cors = require('cors');
const compileRoute = require('./routes/compile');

const app = express();
const PORT = process.env.PORT || 5000;

app.use(cors());
app.use(express.json());

app.use('/api/compile', compileRoute);

app.get('/', (req, res) => {
    res.json({ message: 'CompilHER API is running!' });
});

app.listen(PORT, () => {
    console.log(`CompilHER backend running on port ${PORT}`);
});
