/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "tft.h"
#include "derivate.h"
#include "global.h"
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    // Printing Hello World on TFT
    TFT_init();
    TFT_setBacklight(100);
    TFT_print("Hello world\n");
    CyDelay(5000);
    TFT_clearScreen();
    // Drawing a red line on TFT
    TFT_writeLine(5, 5, 10, 10,  RED);
    CyDelay(5000);
    TFT_clearScreen();
    // Drawing a Green line on TFT
    TFT_writeLine(10, 10, 20, 20,  GREEN);
    CyDelay(5000);
    TFT_clearScreen();
    // Drawing circle on TFT
    
    TFT_drawCircle(50, 50, 50, YELLOW);
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
