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
#include "stdio.h"

void Uart_String_Func()
{
	UART_1_PutString("Starting \r");
}

void Uart_Int_Func()
{
	char str[5];
	int num = 1;

	sprintf(str, "%1d", num);
	UART_1_PutString(str);
}

/*[] END OF FILE */