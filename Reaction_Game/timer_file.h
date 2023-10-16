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
#include "stdio.h"

static int reaction_time, Total_time = 0;

/*========================================
 Timer Interrupt:
 This function captures the reaction time
 of the user in ms
 *========================================
*/

CY_ISR(button1)
{
	int counter = Timer_1_ReadCapture();

	reaction_time = 65536 - counter;
	Total_time += reaction_time;
	Timer_1_ReadStatusRegister();
	Timer_1_Stop();
	Timer_1_WriteCounter(0x0000);

}