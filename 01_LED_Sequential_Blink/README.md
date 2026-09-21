\# Experiment 24: 4-LED Sequential Blinking



Program to interface 4 LEDs with the LPC2148 ARM7 microcontroller in Keil uVision 4 and blink LED 1, LED 2, LED 3, and LED 4 sequentially in a continuous loop. The design and logic are verified using Proteus Professional.



\---



\## Circuit Schematic



<p align="center">

&#x20; <a href="./circuit.svg">

&#x20;   <img src="./circuit.svg" alt="Proteus Circuit Schematic" width="100%"/>

&#x20; </a>

</p>



\---



\## Hardware Pin Connections



| Component Pin | LPC2148 Pin | Logic Type | Description |

| :--- | :--- | :--- | :--- |

| \*\*LED 1 Anode (+)\*\* | \*\*P1.16\*\* | Active-HIGH | Sequential Blinking Stage 1 |

| \*\*LED 2 Anode (+)\*\* | \*\*P1.17\*\* | Active-HIGH | Sequential Blinking Stage 2 |

| \*\*LED 3 Anode (+)\*\* | \*\*P1.18\*\* | Active-HIGH | Sequential Blinking Stage 3 |

| \*\*LED 4 Anode (+)\*\* | \*\*P1.19\*\* | Active-HIGH | Sequential Blinking Stage 4 |

| \*\*LED Cathodes (-)\*\* | \*\*GND\*\* | Ground | Connected via 330Ω Current-Limiting Resistors |



\---



\## Directory Architecture



```text

01\_LED\_Sequential\_Blink/

├── README.md

├── circuit.svg

├── code/

│   ├── main.c

│   ├── Startup.s

│   └── Project.uvproj

└── simulation/

&#x20;   └── circuit.pdsprj

