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

/*========================================
       Function to start and show UART
 *========================================
*/

void UART_init();

/*========================================
   Function to Show Wrong message on UART
 *========================================
*/
void UART_correct();

/*============================================
   Function to Show correct reaction on UART
 *============================================
*/

void UART_wrong();

/*===========================================
 *Function to Show Reaction timing on UART
 *============================================
 */

void UART_time_reaction(int counter);

/*=============================================
 *Function to Show Final Score message on UART
 *Total Reaction Time message on UART
 *==============================================
 */

void UART_final(int correct, int Total_time);