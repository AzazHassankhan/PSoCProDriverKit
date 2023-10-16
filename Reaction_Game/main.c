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
#include "game_file.h"

int main(void)
{
	CyGlobalIntEnable; /*Enable global interrupts. */
    
	Game_Play(); /*Game function */
}

/*[] END OF FILE */