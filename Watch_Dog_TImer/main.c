/* ========================================
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

int main(void)
{
	CyGlobalIntEnable; /*Enable global interrupts. */
	UART_1_Start();  // Starting the UART
	
	CyWdtStart(CYWDT_2_TICKS, 0);	// Starting the WTD, should be provided with signal at least after 2 ticks
	for (;;)
	{
		if (CyResetStatus & CY_RESET_WD)	// Check whether the reset occur because of WTD
		{
			UART_1_PutString("Reset Because of WTD");
		}

		CyWdtClear();	//Give signal to WTD for making sure that system is working perfect
		CyDelay(1000);	//Wait for 1s
	}
}

/*[] END OF FILE */