// Node Modules
const express = require("express");

// Constants
const port = 3000;

// App Initialize
const app = express();

// Hello world route
app.get("/", (req, res) => {
  res.send("Hello world!");
});

// Server Start
app.listen(port, () => {
  console.log(`Example app listening on port ${port}`);
});
