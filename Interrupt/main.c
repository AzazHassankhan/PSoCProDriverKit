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
#include "Interrupts_File.h"

int main(void)
{
	CyGlobalIntEnable; /*Enable global interrupts. */
    Interrupt_Start_Func();
	for (;;) {}
}

/*[] END OF FILE */