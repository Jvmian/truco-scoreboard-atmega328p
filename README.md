# Truco Scoreboard – ATmega328P

An electronic Truco scoreboard developed using the **ATmega328P** microcontroller, featuring a **custom printed circuit board**, embedded firmware written in **C++**, and a **fully functional physical prototype**.

The system is powered by a **custom adjustable power supply developed by the team**, ensuring stable and adequate voltage for reliable electronic operation.

This project focuses on **embedded systems fundamentals**, hardware–software integration, and practical validation through simulation and real-world testing.

---

## 📌 Project Overview

The Truco Scoreboard is a dedicated embedded system designed to count and display game points in a simple, reliable, and standalone manner.

The project board includes an **integrated Arduino**, using the **ATmega328P** microcontroller, which is responsible for all system logic and control.

The development followed a structured engineering workflow:

1. System conception and definition of operating logic  
2. Electronic schematic development and simulation using **TinkerCAD**  
3. Firmware development in **C++**  
4. Custom PCB design  
5. Physical prototype assembly  
6. System testing and real-world validation  

---

## ⚙️ Technologies & Tools

- **Microcontroller:** ATmega328P  
- **Embedded Platform:** Integrated Arduino  
- **Programming Language:** C++  
- **Simulation & Schematic:** TinkerCAD  
- **PCB Design:** Custom `.pcb` file  
- **Power Supply:** Adjustable power supply developed by the team  
- **Field:** Embedded systems and electronics  

---

## 🧠 System Architecture

- The **ATmega328P** is responsible for reading system inputs and controlling the score logic.
- Output devices display the current game score.
- The firmware manages point counting, state transitions, and overall system operation.
- The electronic schematic was developed and validated in **TinkerCAD** prior to physical assembly.
- Power is supplied by a **custom adjustable power supply**, ensuring electrical stability.

---

## 🎮 System Operation

The scoreboard operation is based on **six physical buttons**, organized as follows:

- **Player 1 decrement button**
- **Player 1 increment button**
- **Reset button**
- **Truco button**
- **Player 2 decrement button**
- **Player 2 increment button**

### 🔘 Score Control
Each player has two dedicated buttons:
- One to **increment** the score
- One to **decrement** the score, allowing corrections during gameplay

### 🃏 Truco Button
The **Truco** button automatically applies the corresponding score value according to the firmware logic, simplifying score management during the game.

### 🔄 Reset Button
The **Reset** button fully restarts the match, resetting both players’ scores quickly and safely.

The **ATmega328P** continuously reads button inputs, processes the game logic, and updates the outputs responsible for score display, ensuring stable and reliable operation.

---

## 🧪 Simulation

The **same TinkerCAD project file** was used for:

- Electronic schematic development  
- Circuit simulation  
- Logical validation of system behavior  

This process allowed early detection and correction of issues before building the physical PCB, increasing overall reliability.

---

## 🔧 Hardware

- Custom-designed printed circuit board (PCB)
- Assembled and tested physical prototype
- Fully standalone embedded system
- Powered by a **custom adjustable power supply**

The original PCB design file is included in the repository for documentation and technical reference purposes.

---

## 🎥 Media

The repository includes:
- Photos of the assembled prototype
- A demonstration video showing the system in operation

These materials validate the real-world implementation and functionality of the project.

---

## 📂 Repository Structure

truco-scoreboard-atmega328p/
│
├── firmware/ # Embedded C++ code
├── hardware/ # PCB file and schematic
├── simulation/ # TinkerCAD project (schematic + simulation)
├── media/ # Photos and demonstration video
├── docs/ # Project documentation
├── README.md
└── README-PT-BR.md

---

## 📄 Documentation

Complete project documentation is available in the `docs/` directory, including:
- Detailed system description
- Design decisions
- Explanation of overall operation

---

## 👥 Project Contributions

This project was developed as a collaborative academic work with clearly defined technical responsibilities.

**João Victor Mian Valdomiro**
- System conception and overall project coordination  
- Electronic schematic development and simulation using TinkerCAD  
- Firmware development in C++ for the ATmega328P  
- Custom PCB design  
- Project documentation and repository organization  

**Kaique Garrocini Miguel**
- Physical assembly of the electronic prototype  
- Construction of the project maquette  
- Support during hardware testing and validation  

**Paola Lohana Santos Rabelo**  
**Felippe Andreazi**  
**Guilherme Rebequi**
- General support during project development  
- Assistance with testing, validation, and project conclusion stages  

This division of responsibilities ensured the successful implementation and validation of the system.

---

## 📜 License

This project was developed for educational and portfolio purposes.
