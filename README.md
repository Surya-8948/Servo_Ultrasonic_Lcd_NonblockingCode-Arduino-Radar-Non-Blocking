# 📡 Ultrasonic Radar Scanner using Arduino

A simple **Arduino Radar Scanner** project using an **HC-SR04 Ultrasonic Sensor**, **SG90 Servo Motor**, and **16x2 I2C LCD**. The servo continuously scans from **0° to 180°** while the ultrasonic sensor measures the distance of nearby objects. The measured distance and current servo angle are displayed on the LCD.

---

## 📷 Project Preview

> *(Add your project image or GIF here)*

```
Distance : 25.4 cm
Angle    : 90°
```

---

# ✨ Features

- 🔄 Continuous 0°–180° servo scanning
- 📏 Real-time distance measurement using HC-SR04
- 📺 Live display on 16x2 I2C LCD
- ⏱️ `millis()` based timing (non-blocking servo control)
- 🧩 Modular code structure
- ⚡ Easy to modify and expand

---

# 🛠 Hardware Required

| Component | Quantity |
|-----------|----------|
| Arduino UNO/Nano | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| SG90 Servo Motor | 1 |
| 16x2 I2C LCD | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 🔌 Circuit Connections

## Ultrasonic Sensor

| HC-SR04 | Arduino |
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

| LCD | Arduino UNO |
|-----|--------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

# 📚 Libraries Used

```cpp
#include <Servo.h>
#include <LiquidCrystal_I2C.h>
```

Install using Arduino Library Manager.

---

# ⚙ Working Principle

1. Servo starts at **0°**
2. Rotates towards **180°**
3. HC-SR04 measures the object distance.
4. Distance is displayed on LCD.
5. Current servo angle is displayed.
6. Servo reaches **180°**, then rotates back to **0°**.
7. Process repeats continuously.

---

# 📁 Project Structure

```
Radar Scanner
│
├── setup()
├── loop()
│
├── ser()      // Servo Movement
├── dis()      // Distance Measurement
└── LCD()      // LCD Update
```

---

# ⏱ Timing

| Task | Interval |
|-------|----------|
| Servo Movement | 20 ms |
| Distance Measurement | 100 ms |
| LCD Update | 20 ms |

---

# 🚀 Future Improvements

- Radar visualization using Processing
- OLED Display Support
- Buzzer Alert
- RGB Status LED
- Bluetooth Monitoring
- WiFi Monitoring (ESP32)
- Servo Speed Control
- Obstacle Detection Alarm
- FreeRTOS Version
- Fully Non-blocking Ultrasonic Driver

---

# 📸 Output

```
Distance : 34.2 cm
Angle    : 135°
```

---

# 💡 Learning Concepts

- Embedded C Programming
- Arduino Programming
- millis() Timing
- Non-blocking Programming
- Ultrasonic Sensor Interfacing
- Servo Motor Control
- LCD I2C Communication
- Modular Programming

---


# ⭐ If you found this project helpful

Please give this repository a **⭐ Star** and share it with others!

Happy Coding ❤️
