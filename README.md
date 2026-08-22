<div align="center">

# 📡 Arduino Ultrasonic Radar Scanner

### 🚀 A Non-Blocking Radar Scanner using Arduino UNO, HC-SR04, Servo Motor & 16×2 I2C LCD

<p align="center">
<img src="https://github.com/Surya-8948/Servo_Ultrasonic_Lcd_NonblockingCode-Arduino-Radar-Non-Blocking/blob/main/image.png?raw=true" width="900"/>
</p>

<p align="center">

![Arduino](https://img.shields.io/badge/Arduino-UNO-00979D?style=for-the-badge&logo=arduino)
![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge)
![Platform](https://img.shields.io/badge/Platform-Arduino-success?style=for-the-badge)
![Programming](https://img.shields.io/badge/Programming-Embedded%20Systems-orange?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-red?style=for-the-badge)

</p>

*A beginner-friendly embedded systems project demonstrating **millis() based task scheduling**, servo motor control, ultrasonic distance measurement, and LCD interfacing without blocking delays.*

</div>

---

# 🌟 Overview

This project demonstrates how to build a simple **Arduino Radar Scanner** using an **HC-SR04 Ultrasonic Sensor**, **Servo Motor**, and **16×2 I2C LCD**.

Unlike traditional Arduino projects that rely heavily on `delay()`, this project uses **millis() based scheduling** to perform multiple tasks independently, resulting in smoother servo movement and better code organization.

The servo continuously scans from **0° to 180°**, while the ultrasonic sensor measures object distance and the LCD displays the current distance and scanning angle in real time.

---

# ✨ Features

- 📡 Real-time ultrasonic distance measurement
- 🔄 Continuous 0°–180° radar scanning
- 📺 Live distance and angle display on 16×2 LCD
- ⏱️ millis() based scheduling
- 🚫 No `delay()` in the main loop
- 🧩 Modular code architecture
- 📚 Beginner-friendly source code
- ⚡ Easy to expand with additional sensors
- 🤖 Perfect for learning embedded systems

---

# 📷 Project Preview

<p align="center">
<img src="https://github.com/Surya-8948/Servo_Ultrasonic_Lcd_NonblockingCode-Arduino-Radar-Non-Blocking/blob/main/image.png?raw=true" width="700"/>
</p>

---

# 🛠 Hardware Components

| Component | Quantity |
|------------|----------|
| Arduino UNO / Nano | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| SG90 Servo Motor | 1 |
| 16×2 I2C LCD | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 🔌 Pin Connections

## HC-SR04

| Sensor | Arduino |
|----------|----------|
| VCC | 5V |
| GND | GND |
| TRIG | D4 |
| ECHO | D5 |

---

## Servo Motor

| Servo | Arduino |
|--------|----------|
| Signal | D3 |
| VCC | 5V *(External Supply Recommended)* |
| GND | GND |

---

## I2C LCD

| LCD | Arduino |
|------|----------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

# ⚙️ Working Principle

```text
                Start
                  │
                  ▼
          Initialize Hardware
                  │
                  ▼
          Rotate Servo Motor
          (0° → 180° → 0°)
                  │
                  ▼
     Trigger Ultrasonic Sensor
                  │
                  ▼
      Measure Object Distance
                  │
                  ▼
      Display Distance & Angle
            on I2C LCD
                  │
                  ▼
             Repeat Forever
```

---

# 📁 Project Structure

```text
Arduino-Ultrasonic-Radar/
│
├── Arduino_Radar.ino
├── README.md
├── LICENSE
│
└── Images
    └── image.png
```

---

# 📚 Libraries Used

```cpp
#include <Servo.h>
#include <LiquidCrystal_I2C.h>
```

Install both libraries from the **Arduino Library Manager**.

---

# ⏱️ Task Scheduling

| Task | Interval |
|-------|----------|
| Servo Update | 20 ms |
| Distance Measurement | 100 ms |
| LCD Refresh | 20 ms |

---

# 🧠 Concepts Covered

- Arduino Programming
- Embedded C++
- millis() Timer
- Non-Blocking Programming
- Servo Motor Control
- Ultrasonic Sensor Interfacing
- LCD I2C Communication
- Modular Programming

---

# 🚀 Future Improvements

- 📊 Radar Visualization using Processing
- 📈 Serial Plotter Support
- 🔊 Buzzer Alert
- 🌈 RGB Status LED
- 📡 Bluetooth Control
- 📶 ESP32 WiFi Dashboard
- ☁️ IoT Integration
- 📱 Mobile App Interface
- ⚡ Interrupt-based Ultrasonic Driver
- 🧵 FreeRTOS Version

---

# 🎯 Applications

- Robotics
- Obstacle Detection
- Autonomous Vehicles
- Distance Measurement
- Smart Navigation
- Educational Projects
- Embedded Systems Learning

---

# 📈 Project Difficulty

| Level | Status |
|--------|--------|
| Beginner | ✅ |
| Intermediate | ✅ |
| Advanced | 🔄 Expandable |

---

# 🤝 Contributing

Contributions are always welcome!

If you have ideas for improvements:

1. Fork this repository
2. Create a new branch
3. Commit your changes
4. Push the branch
5. Create a Pull Request

---

# 📄 License

This project is licensed under the **MIT License**.

---



🌐 GitHub: https://github.com/Surya-8948

---

<div align="center">

## ⭐ If you found this project helpful,

### Please consider giving it a ⭐ Star!

It motivates me to build and share more open-source embedded systems projects.

Made with ❤️ using **Arduino & Embedded C++**

</div>
