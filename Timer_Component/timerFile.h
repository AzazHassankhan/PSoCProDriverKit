/*========================================
 *Function to restart and reset the Timer
 *========================================
 */

void Timer_Restart_Func();
/*========================================
 *Function to send reaction time through UART
 *========================================
 */

void Uart_Int_Func(int reaction);

/*========================================
 *Function to start Timer, interrupt and clock
 *========================================
 */

void Comp_Start_Func();