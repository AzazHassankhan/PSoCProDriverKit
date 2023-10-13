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
#include "Led_file.h"

int main(void)
{
	CyGlobalIntEnable; /*Enable global interrupts. */

	/*Place your initialization/startup code here (e.g. MyInst_Start()) */

	for (;;)
	{
		Led_Blinking_func();
		RGB_Blinking_func();
	}
}

/*[] END OF FILE */