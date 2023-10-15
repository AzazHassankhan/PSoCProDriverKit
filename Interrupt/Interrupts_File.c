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

CY_ISR(Button1)
{
	static uint8 state_red = 0;
	state_red = ~state_red;
	Red_Led_Write(state_red);
}

CY_ISR(Button2)
{
	static uint8 state_green = 0;
	state_green = ~state_green;
	Green_Led_Write(state_green);
}

void Interrupt_Start_Func()
{
	isr_1_StartEx(Button1);
	isr_2_StartEx(Button2);
}
/* [] END OF FILE */
