/**************************************************/
/**************************************************/
/*************  Author: Esmat Saied    ************/
/*************   Component: ADC       ************/
/*************   Layer: MCAL           ************/
/*************   Version: 1.00         ************/
/**************************************************/
/**************************************************/

#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

#define CHANNEL_u8_0		0
#define CHANNEL_u8_1		1
#define CHANNEL_u8_2		2
#define CHANNEL_u8_3		3
#define CHANNEL_u8_4		4
#define CHANNEL_u8_5		5
#define CHANNEL_u8_6		6
#define CHANNEL_u8_7		7


void ADC_voidInit(void);
u16 ADC_voidSetChannelReading(u8 Copy_u8Channel);
void ADC_voidENABLE(void);
#endif