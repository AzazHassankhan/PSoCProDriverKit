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

void Segment_Counting()
{
	uint8 array[] = { 0b00111111, 0b00000110, 0b01011011, 0b01001111, 0b01100110,
		0b01101101, 0b01111101, 0b00000111, 0b01111111, 0b01101111
	};

	for (int i = 0; i < 10; i++)
	{
		Sel_A_Write(1);
		Control_Reg_1_Write(array[i]);
		Sel_A_Write(0);
		for (int j = 0; j < 10; j++)
		{
			Control_Reg_1_Write(array[j]);
			CyDelay(700);
		}
	}
}

void Segment_Control()
{
	uint8 array[] = { 0b00111111, 0b00000110, 0b01011011, 0b01001111, 0b01100110,
		0b01101101, 0b01111101, 0b00000111, 0b01111111, 0b01101111
	};

	static int i = 0;
	Sel_A_Write(0);

	if (i < 0)
	{
		i = 10;
	}

	if (Button_inc_Read() == 1)
	{
		if (i > 9)
		{
			i = -1;
		}

		i++;
		Control_Reg_1_Write(array[i]);
		CyDelay(300);
	}
	else if (Button_dec_Read() == 1)
	{
		if (i < 0)
		{
			i = 10;
		}

		i--;
		Control_Reg_1_Write(array[i]);
		CyDelay(300);
	}
	else
	{
		// do nothing 
	}
}


/*[] END OF FILE */