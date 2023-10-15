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

void PWM_Start_Func()
{
	PWM_1_Start();
	PWM_2_Start();
	PWM_3_Start();
}

void PWM_Led_Fader_Func()
{
	for (uint8 i = 0; i < 255; i++)
	{
		PWM_1_WriteCompare(i);
		CyDelay(10);
	}

	for (uint8 i = 255; i > 0; i--)
	{
		PWM_1_WriteCompare(i);
		PWM_2_WriteCompare(255 - i);
		CyDelay(10);
	}

	for (uint8 i = 255; i > 0; i--)
	{
		PWM_2_WriteCompare(i);
		PWM_3_WriteCompare(255 - i);
		CyDelay(10);
	}

	for (uint8 i = 255; i > 0; i--)
	{
		PWM_3_WriteCompare(i);
		CyDelay(10);
	}
}

/*[] END OF FILE */