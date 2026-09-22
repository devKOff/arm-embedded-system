#include <lpc21xx.h>  // Header file for LPC2148 registers

// Function to generate software delay
void delay(unsigned int t)
{
    unsigned int i, j;

    // Outer loop controls the delay duration
    for(i = 0; i < t; i++)

        // Inner loop creates a time delay
        for(j = 0; j < 10000; j++);
}

int main(void)
{
    // Configure P1.16, P1.17, P1.18 and P1.19
    // as OUTPUT pins.
    // 0 = Input, 1 = Output
    IODIR1 = 0x000F0000;

    // Initially turn OFF all four LEDs
    // connected to P1.16 - P1.19.
    IOCLR1 = 0x000F0000;

    // Infinite loop: continuously repeat the sequence
    while(1)
    {
        // Turn OFF all four LEDs
        IOCLR1 = 0x000F0000;

        // Turn ON LED connected to P1.16
        IOSET1 = 0x00010000;

        // Wait for a short period
        delay(200);


        // Turn OFF all four LEDs
        IOCLR1 = 0x000F0000;

        // Turn ON LED connected to P1.17
        IOSET1 = 0x00020000;

        // Wait for a short period
        delay(200);


        // Turn OFF all four LEDs
        IOCLR1 = 0x000F0000;

        // Turn ON LED connected to P1.18
        IOSET1 = 0x00040000;

        // Wait for a short period
        delay(200);


        // Turn OFF all four LEDs
        IOCLR1 = 0x000F0000;

        // Turn ON LED connected to P1.19
        IOSET1 = 0x00080000;

        // Wait for a short period
        delay(200);
    }
}