<div align="center">

# 02 — LED Cumulative ON

**ARM7 (LPC2148) GPIO lab: turn on LEDs cumulatively so each new LED remains ON.**

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

Configure GPIO pins as outputs and progressively set LED bits HIGH until all connected LEDs are ON, then restart the pattern.

---

## Hardware & Tools Used

| Component | Role |
|---|---|
| **LPC2148 (ARM7TDMI-S)** | Used in the experiment |
| **8× LEDs with current-limiting resistors** | Used in the experiment |
| **Keil µVision 4** | Used in the experiment |
| **Proteus 8 Professional** | Used in the experiment |

---

## Circuit Diagram

<div align="center">
  <img src="circuit.svg" alt="LED Cumulative ON circuit schematic" width="700"/>
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

1. Configure the selected GPIO pins using IODIR.
2. Start with no LEDs ON.
3. Set one additional LED bit using IOSET after each delay.
4. After all LEDs are ON, clear the port using IOCLR and repeat.

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
02_LED_Cumulative_ON/
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

LED1 turns ON, then LED2, and so on until all LEDs remain ON together. The sequence then resets.

<div align="center">

[⬅ Back to Lab Index](../README.md)

</div>
