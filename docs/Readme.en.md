<h1 align="left"> VSSS (Very Small Size Soccer)</h1>

<p align="center">
<img loading="lazy" src="http://img.shields.io/static/v1?label=STATUS&message=IN%20DEVELOPMENT&color=GREEN&style=for-the-badge"/>
</p>

![vss](https://github.com/user-attachments/assets/a9e7e197-5df7-4a00-863c-3f58627b3f20)

<h1 align="left"> Project Description </h1>

The **Very Small Size Soccer** (VSSS) category is one of the RoboCup divisions aimed at simulating soccer matches with small autonomous robots. Each team uses up to three circular robots with a maximum diameter of 7.5 cm, on a 1.5 m x 2 m field. The system is controlled by a camera positioned above the field, which sends real-time data to a central computer responsible for vision processing, strategy, and decision-making. Instructions are then transmitted to the robots via wireless communication.

VSSS integrates areas such as computer vision, artificial intelligence, control, and mobile robotics, making it an excellent platform for the practical development of autonomous solutions in real time. It also fosters teamwork, innovation, and competitive spirit among students and researchers.

## 📚 Index

- [Category Rules](#category-rules)
- [Materials Used](#materials-used)
- [Hardware](#hardware)
- [Software](#software)
- [How to Build My VSSS](#how-to-build-my-vsss)

## Category Rules
### Summary of Rules – VSSS (Very Small Size Soccer)

### Objective
To simulate a soccer match between two teams of autonomous robots, focusing on strategy, control, and real-time decision-making.

### Robots
- Max per team: 3 robots on the field (additional substitutes allowed).
- Size: Each robot must fit within a cylinder 75 mm in diameter and 15 cm in height.
- Autonomy: All robots must be fully autonomous, with no direct human control during the match.

### Field
- Dimensions: 1.5 m x 2 m.
- Format: Rectangular, with field markings similar to a standard soccer field (midfield, goal area, sidelines).
- Walls: There are no walls — the ball and robots can go out through the sides (triggering a reposition).

### Vision and Control System
- A camera positioned above the field captures the positions of the robots and the ball.
- A central computer processes the information and decides the actions, sending commands to the robots via radio.
- Each team has its own control system.

### Match Duration
- 2 halves of 5 minutes each, with a 1-minute break.
- The clock only runs while the ball is in play.

### Goal and Scoring
- A goal is scored when the ball fully crosses the goal line.
- The team with the most goals at the end of the match wins.
- In case of a tie, there may be extra time or penalty shootouts (depending on the event).

### Fouls and Penalties
- Excessive physical contact between robots is penalized.
- Robots cannot remain idle blocking the goal for too long ("obstruction" rule).
- Out-of-control or malfunctioning robots must be quickly removed.
- Penalties may include removing the robot for a few seconds or awarding ball possession to the other team.

### Ball Repositions
- When the ball goes out, the referee (or automatic system) repositions it appropriately.
- The game resumes after the repositioning.

### Technical Inspection
Before the matches, robots are evaluated for:
- Dimensions
- Weight (if required)
- Control system functionality
- Autonomy (no external interference allowed)

🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦

## Materials Used 
1 VSSS Unit:
- 1 Circuit Board (PCB or Breadboard)  
- 1 Arduino NANO  
- 1 NRF24L01 Module  
- 1 MPU6050  
- 1 Mini H-Bridge L298n  
- 2 DC Motors

🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦

## Software

### PCB
- Fusion 360

### Code
*(Add description or links if available)*

### Simulation
*(Add details if used)*

🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦

## Hardware

#### Component Wiring
*(Add diagrams or wiring instructions if possible)*

🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦

## How to Build My VSSS

[Google Docs Guide (EN)](https://docs.google.com/document/d/1Gx1FeZU1V7xuebESt6DnqYbtGiYW-2jLfToopUDha7g/edit?usp=sharing)

🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦
