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

/* ========================================
 *Led_Blinking_func()
 *========================================
 */
void Led_Blinking_func()
{
	Led_Green_Write(1);
	Led_Red_Write(1);
	Led_Yellow_Write(1);
	CyDelay(500);
	Led_Green_Write(0);
	Led_Red_Write(0);
	Led_Yellow_Write(0);
}

/* ========================================
 *RGB_Blinking_func()
 *========================================
 */
void RGB_Blinking_func()
{
	RGB_Green_Write(1);
	RGB_Red_Write(0);
	RGB_Blue_Write(0);
	CyDelay(500);
	RGB_Green_Write(0);
	RGB_Red_Write(1);
	RGB_Blue_Write(0);
	CyDelay(500);
	RGB_Green_Write(0);
	RGB_Red_Write(0);
	RGB_Blue_Write(1);
	CyDelay(500);
	RGB_Green_Write(0);
	RGB_Red_Write(0);
	RGB_Blue_Write(0);
}

/*[] END OF FILE */