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

CY_ISR(Counter_Interrupt)
{
	static int state = 0;
	state = ~state;
	red_Write(state);

}

void Component_Starter()
{
	isr_1_StartEx(Counter_Interrupt);
	Clock_1_Start();
	Counter_1_Start();
}

/*[] END OF FILE */