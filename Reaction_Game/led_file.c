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

/*========================================
     Function to on Green Led
 *========================================
*/
void green_led_on()
{
	Green_Led_Write(1);

}

/*========================================
     Function to on Red Led
 *========================================
*/
void red_led_on()
{
	Red_Led_Write(1);
}

/*========================================
     Function to off Both Leds
 *========================================
*/
void leds_off()
{
	Green_Led_Write(0);
	Red_Led_Write(0);
}

/*===============================================
 Function to on yellow Led in order to show end program
 *===============================================
*/
void yellow_led_on()
{
	Yellow_Led_Write(1);
	leds_off();

}

/*[] END OF FILE */