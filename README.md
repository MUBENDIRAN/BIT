# 🔌 BIT – IoT-Based Device Control using ESP32, Blynk, and ThingSpeak

![Platform](https://img.shields.io/badge/Platform-ESP32-blue)
![Tech](https://img.shields.io/badge/IoT-Enabled-brightgreen)
![Status](https://img.shields.io/badge/Status-Prototype-orange)

**Duration:** May 2025  
**Affiliation:** Rajalakshmi Institute of Technology  

---

## 📡 Project Overview

**BIT (Blynk IoT ThingSpeak)** is a smart home automation prototype built using an **ESP32 microcontroller**, the **Blynk cloud platform** for mobile-based device control, and **ThingSpeak** for real-time device status logging and visualization. It demonstrates **remote switching** of electronic appliances and **live telemetry monitoring** using simple HTTP APIs over Wi-Fi.

> Easily adaptable for smart homes, energy-saving systems, and remote IoT control environments.

---

## 🔧 How It Works

1. **Boot & Wi-Fi:** ESP32 powers up and connects to a predefined Wi-Fi network.
2. **Blynk Cloud:** It authenticates using a token and connects to the Blynk platform.
3. **Mobile App Commands:** Commands are sent via Virtual Pins (V0–V2) through the Blynk app.
4. **Device Switching:** GPIO23 controls a relay module to switch appliances ON/OFF.
5. **Status Logging:** Real-time device state is pushed to ThingSpeak using HTTP GET requests for visualization and analytics.

---

## 🧠 Tech Stack

| Component            | Role                                       |
|----------------------|--------------------------------------------|
| **ESP32**            | Wi-Fi MCU to control hardware              |
| **Blynk App + Cloud**| Sends remote control commands              |
| **ThingSpeak**       | IoT dashboard for telemetry & logging      |
| **Relay Module**     | Controls external devices (e.g., bulbs)    |
| **HTTP API**         | Used for ThingSpeak data updates           |
| **Wi-Fi**            | For internet communication and control     |

---

## 📲 Use Cases

- Smart Home Appliance Control  
- Remote IoT Device Switching  
- Smart Energy Management  
- IoT Data Logging for Performance/Health  
- Cloud-based Device Monitoring Dashboards  

---

## 🚀 Getting Started

### 🛠️ Hardware Requirements:
- ESP32 Development Board  
- Relay Module  
- Wi-Fi-enabled environment  
- Smartphone with Blynk App  
- ThingSpeak Account  

### 🔗 Software Dependencies:
- Arduino CLI or Arduino IDE  
- Blynk Library  
- HTTPClient Library (for ThingSpeak API)  

---

## 📸 Demo & Flow Diagram

> _Coming soon: Add GIF/video or flowchart here_

---

## 👨‍💻 Author

**Mubendiran K**  
[GitHub](https://github.com/MUBENDIRAN) • [LinkedIn](https://www.linkedin.com/in/mubendiran-k)  

---

## 🎵 Music Credit

- Background Music: [Elektronomia - Sky High (NCS)](https://youtu.be/TW9d8vYrVFQ)

---

> _“IoT isn’t just the future—it's the present. BIT makes smart control real, accessible, and cloud-integrated.”_
