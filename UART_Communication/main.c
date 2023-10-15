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
#include "UartFuncFile.h"
#include "stdio.h"

int main(void)
{
	  CyGlobalIntEnable; /*Enable global interrupts. */

	  UART_1_Start();
	  /*Enable global interrupts. 
    Uart_String_Func();
    Uart_Int_Func();
	  while(1)
    {Uart_get_Func();
    CyDelay(100);} */
}

/*[] END OF FILE */
