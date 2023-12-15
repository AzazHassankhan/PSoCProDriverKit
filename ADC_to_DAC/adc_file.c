/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdio.h"

void UART_func(int counter)
{
	char str[5];
	sprintf(str, "%d", counter);
	UART_1_PutString(str);
	UART_1_PutString("\r");
}

void Component_Starter_Func()
{
	UART_1_Start();
	VDAC8_1_Start(); 
	ADC_Start();
}

int ADC_Func()
{
	int result;
	ADC_StartConvert();
	ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
	result = ADC_GetAdcResult();
	return result;
}

/* [] END OF FILE */
