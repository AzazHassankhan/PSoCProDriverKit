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
#include "adc_file.h"
/* Defines for DMA_1 */
#define DMA_1_BYTES_PER_BURST 1
#define DMA_1_REQUEST_PER_BURST 1
#define DMA_1_SRC_BASE (CYDEV_PERIPH_BASE)
#define DMA_1_DST_BASE (CYDEV_PERIPH_BASE)

/* Variable declarations for DMA_1 */
/* Move these variable declarations to the top of the function */
uint8 DMA_1_Chan;
uint8 DMA_1_TD[1];

/*CY_ISR(ADC_ISR)
{
	ADC_IsEndConversion(ADC_RETURN_STATUS);
	VDAC8_1_SetValue(ADC_GetResult16() );
	
}*/

int main(void)
{
	CyGlobalIntEnable; /*Enable global interrupts. */

	/*Place your initialization/startup code here (e.g. MyInst_Start()) */
	Component_Starter_Func();
	ADC_Func();

    /* DMA Configuration for DMA_1 */
    DMA_1_Chan = DMA_1_DmaInitialize(DMA_1_BYTES_PER_BURST, DMA_1_REQUEST_PER_BURST, HI16(DMA_1_SRC_BASE), HI16(DMA_1_DST_BASE));
    DMA_1_TD[0] = CyDmaTdAllocate();
    CyDmaTdSetConfiguration(DMA_1_TD[0], 1, DMA_1_TD[0], 0);
    CyDmaTdSetAddress(DMA_1_TD[0], LO16((uint32)ADC_DEC_SAMP_PTR), LO16((uint32)VDAC8_1_Data_PTR));
    CyDmaChSetInitialTd(DMA_1_Chan, DMA_1_TD[0]);
    CyDmaChEnable(DMA_1_Chan, 1);


	for (;;)
	{
	}
}

/*[] END OF FILE */