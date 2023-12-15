/* 
 * Function: UART_func
 * ------------------------------
 * Sends an integer value over UART (Universal Asynchronous Receiver-Transmitter).
 *
 * counter: The integer value to be sent over UART.
 */
void UART_func(int counter);
/* 
 * Function: Component_Starter_Func
 * ------------------------------
 * Initializes and starts essential components such as UART, PWM, and ADC.
 */
void Component_Starter_Func();

/* 
 * Function: ADC_Func
 * ------------------------------
 * Reads an analog value from an ADC channel, waits for conversion to complete, and returns the result.
 *
 * Returns: The analog value obtained from the ADC after conversion.
 */
int ADC_Func();