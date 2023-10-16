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
#include "stdlib.h"
#include "time.h"
#include "segment_file.h"
#include "uART_file.h"
#include "timer_file.h"
#include "led_file.h"
#include "random_Delay_file.h"

/*========================================
               Defining states
 *========================================
*/

typedef enum
{
	Game_Wait,
	Game_Press_button,
	Game_Time_out,
	Game_exit,
}

Game_state;

typedef struct
{
	Game_state state;
}

Game_t;

/*========================================
Creating game object to control state
 *========================================
*/

static Game_t Game_obj;

/*========================================
             State Machine 
 *========================================
*/

void Game_Init()
{
	Game_obj.state = Game_Wait;
	UART_init();
    isr_1_StartEx(button1);
    srand(time(NULL));          /*seed initialization for random number */
}

void Game_Play()
{
	static int count = 0, correct = 0, exit_loop = 0,randomValue=0;

	Game_Init();
	while (!exit_loop)
	{
		switch (Game_obj.state)
		{
			case Game_Wait:

				if ((Button_1_Read() == 1) || (Button_2_Read() == 1))
				{
					Game_obj.state = Game_Press_button;
				}
				else
				{
					Game_obj.state = Game_Wait;
				}

				break;

			case Game_Press_button:
				seven_segment();
                CyDelay(random_value_generator());
				leds_off();
				randomValue = Random_Num_segment();
				Game_obj.state = Game_Time_out;
				Timer_1_Start();

				break;

			case Game_Time_out:

				if ((Button_1_Read() == 1 && randomValue == 1) || (Button_2_Read() == 1 && randomValue == 2))
				{
					UART_correct();
					green_led_on();
					UART_time_reaction(reaction_time);
					correct++;
					Game_obj.state = Game_exit;
				}
				else if ((Button_1_Read() == 1 && randomValue != 1) || (Button_2_Read() == 1 && randomValue != 2))
				{
					UART_wrong();
					red_led_on();
					UART_time_reaction(reaction_time);
					Game_obj.state = Game_exit;
				}
				else
				{
					Game_obj.state = Game_Time_out;
				}

				break;
			case Game_exit:

				if (count < 9)
				{
					Game_obj.state = Game_Wait;
				}
				else
				{
					UART_final(correct, Total_time);
					Game_obj.state = Game_exit;
					exit_loop = 1;
                    yellow_led_on();
				}

				count++;
				break;
		}
	}
}

/*[] END OF FILE */