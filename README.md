# 🌍 ESP32 Remote Home Automation Dashboard

This is a simple web-based dashboard for controlling an ESP32-based device (like a light or relay) **from anywhere in the world** using your own Node.js backend and a free hosting service like Replit.

---

## 📦 Features

- ✅ Turn devices ON/OFF from a public website
- ✅ Works over the internet — no port forwarding needed
- ✅ Simple UI (mobile-friendly)
- ✅ Built using plain HTML, JS, and Express.js

---

## 📁 Project Structure


 esp32-dashboard/  
├── esp32-code/           # Arduino code for ESP32 (connects to backend)  
├── backend/              # Node.js API server (host on Replit)  
├── dashboard/            # HTML + JS frontend (host on Replit or GitHub Pages)  
└── README.md             # This file   


---

## 🔌 Hardware Requirements

- [ESP32 Dev Board](https://www.espressif.com/en/products/socs/esp32)
- LED or relay (or use built-in LED on pin `2`)
- USB cable
- Wi-Fi connection

---

## 🧠 How It Works

1. ESP32 connects to Wi-Fi and **polls a backend server** for a command (`on` or `off`)
2. The user uses a **public website** to send the command
3. The backend stores the command (in memory)
4. ESP32 receives it and acts (turns on/off a light)

[Web Dashboard] → [Node.js Backend API] → [ESP32] → [Relay / Light]

---

## 🚀 Getting Started

### 1. ESP32 Firmware

Upload the Arduino sketch in `esp32-code/` to your board:

- Connect to Wi-Fi
- Polls a URL like: `https://your-replit-app-url/command`
- Turns LED ON or OFF based on server response

### 2. Backend Server (Node.js)

Inside `backend/`, use Replit or your local machine to run:

```bash
npm install
node index.js
```

### 3. Frontend Dashboard

Use the HTML file in `dashboard/index.html`

- Open in a browser or host on GitHub Pages or Replit
- Click "ON"/"OFF" buttons to send a command
- The ESP32 will receive and act on it

---
# 🌐 Hosting Tips

- Host backend on [Replit](https://replit.com/) (get a free public HTTPS endpoint)
- Host dashboard on:  
   1. GitHub Pages  
   2. Replit HTML project  
   3. Vercel (if using React)

---
# 📸 Screenshots

![Screenshot 2025-06-12 005909](https://github.com/user-attachments/assets/5893e8df-7bf1-4510-97b4-a3c1a0f0216c)

---

# 👨‍💻 Author

Made by salman — feel free to fork and expand!


---

✅ Ready to copy into GitHub — just:
1. Create a repo
2. Paste each file into its proper folder
3. Replace `YOUR_WIFI`, `YOUR_PASSWORD`, and `YOUR_REPLIT_URL` with your own values

Need help uploading it all to GitHub in one go or adding screenshots? Just say the word!


