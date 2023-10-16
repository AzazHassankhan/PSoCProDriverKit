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
#include "stdio.h"
#include "stdlib.h"
#include "time.h"


/*========================================
   Funtion to show dot on both segments
 *======================================== */
void seven_segment()
{
	Sel_A_Write(1);
	Control_Reg_1_Write(0b10000000);
	Sel_A_Write(0);
	Control_Reg_1_Write(0b10000000);
}

/*========================================
   Funtion to show 1 or 2 randomly
   on both segments
 *======================================== */
int Random_Num_segment()
{  
	int randomValue = (rand() % 2) + 1;	// Generate either 1 or 2 and display

	if (randomValue == 1)
	{
		Sel_A_Write(1);
		Control_Reg_1_Write(0b00000110);
		Sel_A_Write(0);
		Control_Reg_1_Write(0b00000110);
	}
	else if (randomValue == 2)
	{
		Sel_A_Write(1);
		Control_Reg_1_Write(0b01011011);
		Sel_A_Write(0);
		Control_Reg_1_Write(0b01011011);
	}
	else
	{
		Sel_A_Write(1);
		Control_Reg_1_Write(0b00111111);
		Sel_A_Write(0);
		Control_Reg_1_Write(0b00111111);
	}
    return randomValue;
}

/*[] END OF FILE */