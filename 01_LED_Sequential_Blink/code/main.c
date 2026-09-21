#include <lpc21xx.h>

void delay(unsigned int time)
{
    unsigned int i, j;
    for(i = 0; i < time; i++)
        for(j = 0; j < 10000; j++);  // Software delay loop
}

int main(void)
{
    // Configure P1.16, P1.17, P1.18, and P1.19 as Output pins
    // Bitmask 0x000F0000 = 0000 0000 0000 1111 0000 0000 0000 0000 in binary
    IODIR1 = 0x000F0000;
    
    // Set P1.16 - P1.19 HIGH initially
    IOSET1 = 0x000F0000;

    while(1)
    {
        // Turn OFF all 4 LEDs (drive P1.16-P1.19 LOW)
        IOCLR1 = 0x000F0000;
        // Turn ON LED 1 at P1.16 (drive P1.16 HIGH: 0x00010000)
        IOSET1 = 0x00010000;
        delay(200);

        // Turn OFF all 4 LEDs
        IOCLR1 = 0x000F0000;
        // Turn ON LED 2 at P1.17 (drive P1.17 HIGH: 0x00020000)
        IOSET1 = 0x00020000;
        delay(200);

        // Turn OFF all 4 LEDs
        IOCLR1 = 0x000F0000;
        // Turn ON LED 3 at P1.18 (drive P1.18 HIGH: 0x00040000)
        IOSET1 = 0x00040000;
        delay(200);

        // Turn OFF all 4 LEDs
        IOCLR1 = 0x000F0000;
        // Turn ON LED 4 at P1.19 (drive P1.19 HIGH: 0x00080000)
        IOSET1 = 0x00080000;
        delay(200);
    }
    return 0;
}