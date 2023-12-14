/*========================================
 *
 *Copyright YOUR COMPANY, THE YEAR
 *All Rights Reserved
 *UNPUBLISHED, LICENSED SOFTWARE.
 *
 *CONFIDENTIAL AND PROPRIETARY INFORMATION
 *WHICH IS THE PROPERTY OF your company.
 *
 *========================================
 */
#include "project.h"

volatile int wakeup;
CY_ISR(button)	//interrupt for button
{
	wakeup = 1;
}

CY_ISR(SleepTimer)	//interrupt for button
{
	isr_2_ClearPending();
	SleepTimer_1_GetStatus();
	wakeup = 2;
}

int main(void)
{
	CyGlobalIntEnable; /*Enable global interrupts. */
	UART_1_Start();	// Starting the UART
	SleepTimer_1_Start();
	isr_1_StartEx(button);	// start interrupt
	isr_2_StartEx(SleepTimer);	// start interrupt

	UART_1_PutString("Sleep");	// show sleep on uart terminal
	for (;;)
	{
		CyDelay(500);
		CyPmSaveClocks();	// Get into sleep mode
		CyPmSleep(0, PM_SLEEP_SRC_PICU | PM_SLEEP_SRC_CTW);	// wakeup on periphral interrupt
		CyPmRestoreClocks();	//to wakeup from sleep
		if (wakeup == 1)
		{
			UART_1_PutString("Wakeup by Button"); // After Pressing Button
		}	
		else if (wakeup == 2)
		{
			UART_1_PutString("Wakeup by timer"); // After Sleep Timer Interrupt
		}
		else 
        {
            // to do nothing
        }
	}

}
