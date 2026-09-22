<div align="center">

# 03 — LCD Display NIET

**ARM7 (LPC2148) LCD lab: display the text NIET on a character LCD.**

[![MCU](https://img.shields.io/badge/MCU-ARM7%20LPC2148-345087?style=flat-square&logo=arm&logoColor=white)](https://www.nxp.com/products/LPC2148)
[![IDE](https://img.shields.io/badge/IDE-Keil%20%C2%B5Vision%204-orange?style=flat-square)](https://www.keil.com/)
[![Simulation](https://img.shields.io/badge/Simulation-Proteus%208-red?style=flat-square)](https://www.labcenter.com/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green?style=flat-square)](../LICENSE)

[⬅ Back to Lab Index](../README.md)

</div>

---

## Table of Contents

- [Objective](#objective)
- [Hardware & Tools Used](#hardware--tools-used)
- [Circuit Diagram](#circuit-diagram)
- [Code Overview](#code-overview)
- [Simulation](#simulation)
- [How to Build & Run](#how-to-build--run)
- [Repository Structure](#repository-structure)
- [Expected Output](#expected-output)

---

## Objective

Interface a 16×2 character LCD with the LPC2148 and display a fixed text message.

---

## Hardware & Tools Used

| Component | Role |
|---|---|
| **LPC2148 (ARM7TDMI-S)** | Used in the experiment |
| **16×2 character LCD** | Used in the experiment |
| **LCD data and control connections** | Used in the experiment |
| **Keil µVision 4** | Used in the experiment |
| **Proteus 8 Professional** | Used in the experiment |

---

## Circuit Diagram

<div align="center">
  <img src="circuit.svg" alt="LCD Display NIET circuit schematic" width="700"/>
</div>

> If the schematic does not render inline, open [`circuit.svg`](circuit.svg) directly.
> Update the image filename if your project uses a different schematic file.

---

## Code Overview

| File | Description |
|---|---|
| [`code/main.c`](code/main.c) | Main embedded C program for the experiment |
| [`code/Startup.s`](code/Startup.s) | ARM7 startup assembly file |
| [`code/Project.uvproj`](code/Project.uvproj) | Keil µVision 4 project file |

**Core logic:**

1. Configure GPIO pins used by the LCD.
2. Send LCD initialization commands.
3. Send the required character data.
4. Display NIET on the LCD and keep the program running.

---

## Simulation

Open [`simulation/circuit.pdsprj`](simulation/circuit.pdsprj) in **Proteus 8 Professional**:

1. Build the project in Keil µVision 4.
2. Locate the generated `.hex` file.
3. Open the LPC2148 component properties in Proteus.
4. Set the generated `.hex` file as the **Program File**.
5. Run the simulation and observe the output.

---

## How to Build & Run

1. Open [`code/Project.uvproj`](code/Project.uvproj) in **Keil µVision 4**.
2. Select **Project → Build Target**.
3. Confirm that the project builds successfully and generates a `.hex` file.
4. Open [`simulation/circuit.pdsprj`](simulation/circuit.pdsprj) in Proteus.
5. Attach the generated `.hex` file to the LPC2148.
6. Start the simulation.
7. Observe the connected device or output indicator.

---

## Repository Structure

```text
03_LCD_Display_NIET/
├── README.md
├── circuit.svg
├── code/
│   ├── main.c
│   ├── Startup.s
│   └── Project.uvproj
└── simulation/
    └── circuit.pdsprj
```

> Keep the structure above only if these files exist in your project. Rename the files or folders if your actual repository uses different names.

---

## Expected Output

The LCD displays the text NIET.

<div align="center">

[⬅ Back to Lab Index](../README.md)

</div>
