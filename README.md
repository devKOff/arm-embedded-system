# <div align="center">

# 

# \# ARM7 (LPC2148) Embedded Systems Lab

# 

# \*\*A complete collection of ARM7 LPC2148 microcontroller lab exercises — Keil µVision 4 Embedded C

# source code paired with Proteus 8 simulation schematics for every experiment.\*\*

# 

# Covers GPIO, 16×2 LCD interfacing, UART serial communication, sensor interfacing, switch/LED

# logic, seven-segment counters, SPI protocol, and DC motor control via L293D — built for embedded

# systems and IoT lab coursework.

# 

# \[!\[MCU](https://img.shields.io/badge/MCU-ARM7%20LPC2148-345087?style=flat-square\&logo=arm\&logoColor=white)](https://www.nxp.com/products/LPC2148)

# \[!\[IDE](https://img.shields.io/badge/IDE-Keil%20µVision%204-orange?style=flat-square)](https://www.keil.com/)

# \[!\[Simulation](https://img.shields.io/badge/Simulation-Proteus%208-red?style=flat-square)](https://www.labcenter.com/)

# \[!\[License: MIT](https://img.shields.io/badge/License-MIT-green?style=flat-square)](LICENSE)

# \[!\[Status](https://img.shields.io/badge/Status-Active-brightgreen?style=flat-square)](#)

# 

# </div>

# 

# \---

# 

# \## Table of Contents

# 

# \- \[Overview](#overview)

# \- \[Tools \& Requirements](#tools--requirements)

# \- \[Lab Index](#lab-index)

# \- \[Repository Structure](#repository-structure)

# \- \[How to Use](#how-to-use)

# \- \[License](#license)

# 

# \---

# 

# \## Overview

# 

# This repository is a structured, lab-by-lab archive of ARM7 (LPC2148) embedded C programming

# exercises. Every lab is self-contained in its own numbered folder and includes:

# 

# \- 📄 A dedicated \*\*README.md\*\* explaining the objective, circuit, and code for that lab

# \- 🖼️ A \*\*circuit.svg\*\* schematic diagram

# \- 💻 \*\*Keil µVision 4\*\* project files (`main.c`, `Startup.s`, `Project.uvproj`) under `code/`

# \- 🧪 A \*\*Proteus\*\* simulation project (`circuit.pdsprj`) under `simulation/`

# 

# \---

# 

# \## Tools \& Requirements

# 

# | Tool | Purpose | Notes |

# |---|---|---|

# | \*\*Keil µVision 4 (MDK-ARM)\*\* | Writing, compiling, and building embedded C code for LPC2148 | Each lab's `code/Project.uvproj` opens directly in Keil 4 |

# | \*\*Proteus 8 Professional\*\* | Circuit simulation without physical hardware | Each lab's `simulation/circuit.pdsprj` opens directly in Proteus |

# | \*\*LPC2148 Flash Utility / Flash Magic\*\* \*(optional)\* | Flashing the compiled `.hex` onto a physical LPC2148 board | Only needed for real hardware deployment |

# | \*\*NXP LPC2148 development board\*\* \*(optional)\* | Real-hardware testing | Not required — every lab can be run entirely in Proteus simulation |

# 

# \---

# 

# \## Lab Index

# 

# | # | Lab | Focus Area | Description |

# |---|---|---|---|

# | 01 | \[LED\_Sequential\_Blink](01\_LED\_Sequential\_Blink) | GPIO | Sequentially blink a row of LEDs connected to a GPIO port |

# | 02 | \[LED\_Cumulative\_ON](02\_LED\_Cumulative\_ON) | GPIO | Turn on LEDs one-by-one in a cumulative (building-up) pattern |

# | 03 | \[LCD\_Display\_NIET](03\_LCD\_Display\_NIET) | 16×2 LCD | Initialize a 16×2 LCD and display static text |

# | 04 | \[LCD\_Welcome\_To\_Niet](04\_LCD\_Welcome\_To\_Niet) | 16×2 LCD | Display a custom welcome message on the LCD |

# | 05 | \[LCD\_Two\_Line\_Display](05\_LCD\_Two\_Line\_Display) | 16×2 LCD | Drive both lines of the 16×2 LCD independently |

# | 06 | \[LCD\_Internet\_Of\_Things](06\_LCD\_Internet\_Of\_Things) | 16×2 LCD | Display IoT-related text/status on the LCD |

# | 07 | \[UART\_Tx\_Char\_A](07\_UART\_Tx\_Char\_A) | UART | Transmit a single character (`'A'`) over UART |

# | 08 | \[UART\_Tx\_String\_Alexa](08\_UART\_Tx\_String\_Alexa) | UART | Transmit a full string over UART |

# | 09 | \[UART\_Rx\_Display\_LCD](09\_UART\_Rx\_Display\_LCD) | UART + LCD | Receive UART data and display it live on the LCD |

# | 10 | \[UART\_Rx\_Condition\_LCD](10\_UART\_Rx\_Condition\_LCD) | UART + LCD | Conditional logic on received UART data, reflected on the LCD |

# | 11 | \[UART\_Control\_LEDs](11\_UART\_Control\_LEDs) | UART + GPIO | Control onboard LEDs via UART commands |

# | 12 | \[Dual\_Switch\_AND\_LED](12\_Dual\_Switch\_AND\_LED) | GPIO / Digital Logic | Drive an LED using an AND condition from two switch inputs |

# | 13 | \[IR\_Sensor\_Detection](13\_IR\_Sensor\_Detection) | Sensors | Detect objects/obstacles using an IR sensor |

# | 14 | \[Gas\_Sensor\_Alert](14\_Gas\_Sensor\_Alert) | Sensors | Trigger an alert when a gas sensor crosses a threshold |

# | 15 | \[Soil\_Moisture\_Sensor](15\_Soil\_Moisture\_Sensor) | Sensors | Read and respond to soil moisture sensor data |

# | 16 | \[Seven\_Segment\_Counter](16\_Seven\_Segment\_Counter) | Timers / Display | Drive a seven-segment display as an incrementing counter |

# | 17 | \[SPI\_Master\_Loopback](17\_SPI\_Master\_Loopback) | SPI | Configure LPC2148 as SPI master in loopback mode |

# | 18 | \[DC\_Motor\_L293D](18\_DC\_Motor\_L293D) | Motor Control | Drive a DC motor's direction/speed via the L293D driver IC |

# 

# > Folder links above point to each lab's directory in this repository — open the folder's own

# > `README.md` for a full write-up of that specific experiment.

# 

# \---

# 

# \## Repository Structure

# 

# ```text

# arm-embedded-system/

# ├── 01\_LED\_Sequential\_Blink/

# │   ├── README.md

# │   ├── circuit.svg

# │   ├── code/

# │   │   ├── main.c

# │   │   ├── Startup.s

# │   │   └── Project.uvproj

# │   └── simulation/

# │       └── circuit.pdsprj

# ├── 02\_LED\_Cumulative\_ON/

# │   └── ... (same layout as above)

# ├── 03\_LCD\_Display\_NIET/

# ├── 04\_LCD\_Welcome\_To\_Niet/

# ├── 05\_LCD\_Two\_Line\_Display/

# ├── 06\_LCD\_Internet\_Of\_Things/

# ├── 07\_UART\_Tx\_Char\_A/

# ├── 08\_UART\_Tx\_String\_Alexa/

# ├── 09\_UART\_Rx\_Display\_LCD/

# ├── 10\_UART\_Rx\_Condition\_LCD/

# ├── 11\_UART\_Control\_LEDs/

# ├── 12\_Dual\_Switch\_AND\_LED/

# ├── 13\_IR\_Sensor\_Detection/

# ├── 14\_Gas\_Sensor\_Alert/

# ├── 15\_Soil\_Moisture\_Sensor/

# ├── 16\_Seven\_Segment\_Counter/

# ├── 17\_SPI\_Master\_Loopback/

# ├── 18\_DC\_Motor\_L293D/

# ├── LICENSE

# └── README.md   <-- (this file)

# ```

# 

# Every one of the 18 lab folders follows the identical internal structure shown for

# `01\_LED\_Sequential\_Blink` above: a lab-specific `README.md`, a `circuit.svg` schematic, a

# `code/` folder with the Keil project, and a `simulation/` folder with the Proteus project.

# 

# \---

# 

# \## How to Use

# 

# 1\. \*\*Clone the repository\*\*

# &#x20;  ```bash

# &#x20;  git clone https://github.com/devKOff/arm-embedded-system.git

# &#x20;  cd arm-embedded-system

# &#x20;  ```

# 2\. \*\*Pick a lab\*\* and open its folder, e.g.:

# &#x20;  ```bash

# &#x20;  cd 01\_LED\_Sequential\_Blink

# &#x20;  ```

# 3\. \*\*Review the circuit\*\* — open `circuit.svg` in a browser or vector editor to see the schematic.

# 4\. \*\*Build and run the code\*\* — open `code/Project.uvproj` in \*\*Keil µVision 4\*\*, build the

# &#x20;  project, and generate the `.hex` output.

# 5\. \*\*Simulate it\*\* — open `simulation/circuit.pdsprj` in \*\*Proteus 8 Professional\*\*, load the

# &#x20;  built `.hex` file into the LPC2148 component, and run the simulation.

# 6\. \*\*(Optional) Flash to hardware\*\* — use Flash Magic or your preferred LPC2148 flashing tool to

# &#x20;  load the `.hex` file onto a physical board.

# 

# \---

# 

# \## License

# 

# This project is released under the terms of the \[MIT License](LICENSE).

# 

# > \*\*Note:\*\* No `LICENSE` file currently exists in this repository. Add one via GitHub's

# > \*\*Add file → Create new file → LICENSE\*\* flow (choose the MIT template) so the badge and link

# > above resolve correctly.

# 

# <div align="center">

# 

# \*A structured ARM7 LPC2148 lab archive — Embedded C + Proteus simulation for every experiment.\*

# 

# </div>

