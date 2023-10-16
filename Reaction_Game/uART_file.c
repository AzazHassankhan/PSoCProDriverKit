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
#include "stdio.h"

/*========================================
       Function to start and show UART
 *========================================
*/

void UART_init()
{
	UART_1_Start();
	UART_1_PutString("********Reaction test program*******\r");
	UART_1_PutString("press one of the two buttons to start...\r");
}

/*========================================
   Function to Show Wrong message on UART
 *========================================
*/
void UART_correct()
{
	UART_1_PutString("Great - correct button pressed\r");
}

/*============================================
   Function to Show correct reaction on UART
 *============================================
*/

void UART_wrong()
{
	UART_1_PutString("Bad - Wrong button pressed\r");
}

/* ===========================================
 *Function to Show Reaction timing on UART
 *============================================
 */

void UART_time_reaction(int counter)
{
	char str[5];
	sprintf(str, "%d", counter);
	UART_1_PutString(str);
	UART_1_PutString("ms \r");
}

/* =============================================
 *Function to Show Final Score message on UART
 *Total Reaction Time message on UART
 *==============================================
 */

void UART_final(int correct, int Total_time)
{
	char str[5];

	sprintf(str, "%1d", correct);
	UART_1_PutString("-----------*************---------\r");
	UART_1_PutString("Total Correct score = ");
	UART_1_PutString(str);

	sprintf(str, "%1d", Total_time);
	UART_1_PutString("\rTotal Reaction Time = ");
	UART_1_PutString(str);
    UART_1_PutString("ms \r");
}