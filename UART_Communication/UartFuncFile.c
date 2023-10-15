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

void Uart_get_Func()
{
	uint8 receive;
	receive = UART_1_GetChar();
	if (receive == '1')
	{
		Red_Led_Write(1);
	}
	else if (receive == '2')
	{
		Red_Led_Write(0);
	}
}

/*[] END OF FILE */
