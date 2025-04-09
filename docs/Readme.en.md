
<h1 align="left"> VSSS (Very Small Size Soccer)</h1>

<p align="center">
<img loading="lazy" src="http://img.shields.io/static/v1?label=STATUS&message=IN%20DEVELOPMENT&color=GREEN&style=for-the-badge"/>
</p>

![image](https://github.com/user-attachments/assets/85888ab1-4472-4e1d-974b-98f749e5b422)

## 📝 Project Description

The VSSS (Very Small Size Soccer) category is an autonomous robotics competition where teams with up to 6 robots (each with a maximum diameter of 7.5 cm and height of 15 cm) compete on a 1.5 m × 1.3 m field. The robots are controlled by computer vision and artificial intelligence algorithms, making real-time decisions based on images captured by an overhead camera.

---

## 📚 Index

- [Rules Summary](#rules-summary)
- [Materials Used](#materials-used)
- [Hardware](#hardware)
- [Software](#software)
- [How to Build My VSSS](#how-to-build-my-vsss)

---

## 📏 Rules Summary

- **Robots**: up to 6 per team (3 on the field). Max size: 7.5 cm diameter, 15 cm height.  
- **Field**: 1.5 m x 1.3 m, with standard markings.  
- **Ball**: orange, approx. 4 cm in diameter.  
- **Match**: 2 halves of 5 minutes.  
- **Control**: fully autonomous, based on computer vision.  
- **Infractions**: excessive contact, field exit, unfair obstruction.  
- **Vision System**: overhead camera and real-time image processing software.

---

## 🔧 Materials Used  

1 VSSS Robot:
- 1 Circuit Board (PCB/Protoboard)  
- 1 Arduino NANO  
- 1 NRF24L01 Module  
- 1 MPU6050  
- 1 Mini H-Bridge (L298n)  
- 2 DC Motors

---

## ⚙️ Hardware

VSSS robots are small, autonomous, and designed to operate with high precision in a compact space. The hardware system consists of:

- **Structure**: compact chassis (up to 7.5 cm diameter, 15 cm height), lightweight and durable, usually 3D printed.

- **Locomotion**: DC motors with encoders, using small, narrow wheels for movement.

- **Control**: an embedded board (Arduino, ESP32) that interprets radio commands and controls the motors in real time.

- **Communication**: radio module (typically 2.4 GHz) to receive commands from the central computer.

- **Additional Electronics**: motor drivers (H-Bridge), sensors, and batteries for power.

---

## 🧠 Software

In the VSSS category, the system is divided into two main components: computer vision and robot control, typically developed in different programming languages to leverage their strengths.

- **Python** is used for the computer vision part, as it simplifies the use of libraries like **OpenCV** to process the overhead camera feed, detect the ball and robots, and generate real-time coordinates.

- **C++** is used for robot control, offering better performance and precision when sending movement commands and executing decision-making algorithms.

---

## 🛠️ How to Build My VSSS

(https://docs.google.com/document/d/1Gx1FeZU1V7xuebESt6DnqYbtGiYW-2jLfToopUDha7g/edit?usp=sharing)
