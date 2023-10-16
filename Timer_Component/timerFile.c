#include "project.h"
#include "stdio.h"


// Function to restart and reset the Timer
void Timer_Restart_Func()
{
	Timer_1_ReadStatusRegister();	
	Timer_1_Stop();	                
	Timer_1_WriteCounter(0x0000);	
	Timer_1_Start();	            
}

// Function to send reaction time through UART
void Uart_Int_Func(int reaction)
{
	char str[5];
	sprintf(str, "%d", reaction); 
	UART_1_PutString(str); 
	UART_1_PutString("ms \r"); 
}

// Interrupt Service Routine for button press
CY_ISR(button1)
{
	static int reaction;
	int counter = Timer_1_ReadCapture();	

	reaction = 65536 - counter;	// Calculate the reaction time
	Uart_Int_Func(reaction);	// Send reaction time via UART
	Timer_Restart_Func();	    // Restart the timer for the next measurement
}

// Function to restart and reset the Timer
void Comp_Start_Func()
{
    isr_1_StartEx(button1);
	Timer_1_Start();
	UART_1_Start();	            
}