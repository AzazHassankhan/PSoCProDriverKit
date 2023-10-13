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

void Leds_and_Button_Func()
{
	static int State_Red = 0, State_Green = 0, State_Yellow = 0, State_Blue = 0;
	if (Button_1_Read() == 1)
	{
		State_Red = ~State_Red;
		Led_Red_Write(State_Red);
	}

	if (Button_2_Read() == 1)
	{
		State_Green = ~State_Green;
		Led_Green_Write(State_Green);
	}

	if (Button_3_Read() == 1)
	{
		State_Yellow = ~State_Yellow;
		Led_Yellow_Write(State_Yellow);
	}

	if (Button_4_Read() == 1)
	{
		State_Blue = ~State_Blue;
		Led_Blue_Write(State_Blue);}
	
    CyDelay(180);
}


/*[] END OF FILE */