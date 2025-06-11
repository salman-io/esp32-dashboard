const express = require("express");
const app = express();
const cors = require("cors");

app.use(cors()); // allow access from websites
app.use(express.json()); // allow reading JSON data

let command = "off"; // default command

// When ESP32 asks for the current command:
app.get("/command", (req, res) => {
  res.json({ led: command }); // send current command to ESP32
});

// When your dashboard sends a new command:
app.post("/command", (req, res) => {
  const { led } = req.body;
  if (led === "on" || led === "off") {
    command = led; // update the command
    res.json({ status: "success", command });
  } else {
    res.status(400).json({ status: "error", message: "Invalid command" });
  }
});

// Start the server
app.listen(3000, () => {
  console.log("Server running on port 3000");
});
