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
#include "stdlib.h"

/* ========================================
 *This Function Generates a random int value 
   between 1000 to 5000
 *========================================
 */
int random_value_generator()
{
	int randomValueGen = (rand() % 2001);

	// Add 1000 to bring the range within 1000-5000
	randomValueGen += 1000;
	return randomValueGen;
}

/*[] END OF FILE */