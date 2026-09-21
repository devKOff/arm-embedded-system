
# Experiment 01: 4-LED Sequential Blinking

A program to interface **4 LEDs with the LPC2148 ARM7 microcontroller** using **Keil uVision 4**. The LEDs blink sequentially in a continuous loop. The circuit and program logic are verified using **Proteus Professional**.

---

## Circuit Schematic

![4-LED Sequential Blinking Circuit](./circuit.svg)

**[Click here to view the circuit schematic](./circuit.svg)**

---

## Hardware Pin Connections

| Component Pin | LPC2148 Pin | Logic Type | Description |
|---|---|---|---|
| **LED 1 Anode (+)** | **P1.16** | Active-HIGH | Sequential Blinking Stage 1 |
| **LED 2 Anode (+)** | **P1.17** | Active-HIGH | Sequential Blinking Stage 2 |
| **LED 3 Anode (+)** | **P1.18** | Active-HIGH | Sequential Blinking Stage 3 |
| **LED 4 Anode (+)** | **P1.19** | Active-HIGH | Sequential Blinking Stage 4 |
| **LED Cathodes (-)** | **GND** | Ground | Connected through 330Ω current-limiting resistors |

### Pin Configuration

| Parameter | Configuration |
|---|---|
| Microcontroller | ARM7 LPC2148 |
| LED 1 | P1.16 |
| LED 2 | P1.17 |
| LED 3 | P1.18 |
| LED 4 | P1.19 |
| GPIO Direction | Output |
| Logic HIGH | LED ON |
| Logic LOW | LED OFF |

---

## Working Principle

The LPC2148 microcontroller controls four LEDs connected to GPIO pins P1.16, P1.17, P1.18, and P1.19.

The program turns ON one LED at a time and turns OFF the previously active LED. A delay is applied between each stage.

### Sequential Operation

```text
LED 1 ON
   ↓
LED 1 OFF → LED 2 ON
   ↓
LED 2 OFF → LED 3 ON
   ↓
LED 3 OFF → LED 4 ON
   ↓
LED 4 OFF
   ↓
Repeat from LED 1
```

The sequence continues continuously in an infinite loop.

---

## Software Requirements

- **Microcontroller:** ARM7 LPC2148
- **IDE:** Keil uVision 4
- **Programming Language:** Embedded C
- **Simulation Software:** Proteus Professional
- **Startup File:** Startup.s

---

## Project Directory Structure

```text
01_LED_Sequential_Blink/
├── README.md                 # Project documentation
├── circuit.svg               # Proteus circuit schematic
├── code/                     # Keil uVision 4 project files
│   ├── main.c               # Main embedded C program
│   ├── Startup.s            # ARM7 startup assembly file
│   └── Project.uvproj       # Keil project file
└── simulation/               # Proteus simulation files
    └── circuit.pdsprj       # Proteus project file
```

---

## Files Description

| File | Description |
|---|---|
| `README.md` | Project documentation |
| `circuit.svg` | Circuit schematic |
| `code/main.c` | Embedded C source code |
| `code/Startup.s` | ARM7 startup assembly code |
| `code/Project.uvproj` | Keil uVision 4 project |
| `simulation/circuit.pdsprj` | Proteus simulation project |

---

## Expected Output

The four LEDs blink sequentially in the following order:

**LED 1 → LED 2 → LED 3 → LED 4 → Repeat**

Each LED turns ON individually while the remaining LEDs stay OFF.

---

## Simulation

The circuit is designed and tested in **Proteus Professional**.

The simulation verifies:

- LPC2148 GPIO output configuration.
- Sequential LED activation.
- LED switching and timing delay.
- Continuous looping operation.

---

## Project Objectives

1. Understand GPIO programming in the LPC2148 ARM7 microcontroller.
2. Interface multiple LEDs with GPIO pins.
3. Implement sequential LED blinking using Embedded C.
4. Verify the circuit using Proteus Professional.
5. Develop practical ARM7 embedded systems programming skills.

---

## Author

**Devendra Kashyap**

B.Tech CSE (IoT)

ARM7 LPC2148 Embedded Systems Laboratory