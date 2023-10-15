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
#include "PWMLEDFile.h"

int main(void)
{
	CyGlobalIntEnable; /*Enable global interrupts. */
	PWM_Start_Func();
	/*Place your initialization/startup code here (e.g. MyInst_Start()) */

	while (1)
	{
		PWM_Led_Fader_Func();
	}
}

/*[] END OF FILE */