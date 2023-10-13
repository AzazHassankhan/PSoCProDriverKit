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
#include "PushButtons_file.h"

int main(void)
{
	CyGlobalIntEnable; /*Enable global interrupts. */

	for (;;)
	{
		Leds_and_Button_Func();
	}
}

/*[] END OF FILE */