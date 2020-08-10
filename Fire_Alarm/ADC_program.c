#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ADC_config.h"
#include "ADC_interface.h"
#include "ADC_private.h"
#include "ADC_registers.h"


void ADC_voidInit(void)
{
	/*1- Set Reference Value*/
	#if ADC_u8_REF_SELECTION== AREF
	CLR_BIT(ADMUX, ADMUX_REFS0);
	CLR_BIT(ADMUX, ADMUX_REFS1);

	#elif ADC_u8_REF_SELECTION== AVCC
	SET_BIT(ADMUX, ADMUX_REFS0);
	CLR_BIT(ADMUX, ADMUX_REFS1);
	#elif ADC_u8_REF_SELECTION== INTERNAL_2_56V
	SET_BIT(ADMUX, ADMUX_REFS0);
	SET_BIT(ADMUX, ADMUX_REFS1);
	#else
	#error "Wrong ADC_u8_REF_SELECTION Configuration"

#endif

	if (ADC_u8_RESULT_SELECTION== EIGHT_BITS)
		/*Activate Left Adjust Reg.*/
		SET_BIT(ADMUX, ADMUX_ADLAR);

	/*Set the pre-scaler configuration*/
	ADCSRA &= PRESCALER_SELECTION_BIT_MASK;
	ADCSRA |= ADC_u8_PRESCALER_SELECTION;
}

u16 ADC_u16GetChannelReading(u8 Copy_u8Channel)
{
	/*Set the required channel*/
	ADMUX &= CHANNEL_SELECTION_BIT_MASK;
	ADMUX |= Copy_u8Channel;
#if ADC_u8_START_CONVERSION== MANUAL_TRIGGER
/*Start Conversion*/
SET_BIT(ADCSRA, ADCSRA_ADSC);
/*Polling until the conversion completion flag arise*/
while((GET_BIT(ADCSRA, ADCSRA_ADIF))== 0);
/*Clear the completion flag*/
SET_BIT(ADCSRA, ADCSRA_ADIF);

#elif  ADC_u8_START_CONVERSION== AUTO_TRIGGER
/*Set the auto trigger bit*/
SET_BIT(ADCSRA, ADCSRA_ADATE);
/*Start The First Conversion*/
SET_BIT(ADCSRA, ADCSRA_ADSC);
/*Choose The source of auto trigger*/
SFIOR &= AUTO_TRIGGER_SOURCE_SELECTION_MASK;
SFIOR |= ADC_u8_AUTO_TRIGGER_SOURCE_SELECTION;
/*Enable Interrupt*/
SET_BIT(ADCSRA, ADCSRA_ADIE);
#else
#error "Wrong ADC_u8_START_CONVERSION Configuration"
#endif

#if ADC_u8_RESULT_SELECTION== EIGHT_BITS
return ADCH;
#elif ADC_u8_RESULT_SELECTION== TEN_BITS
return ADC;
#endif
}

void ADC_voidENABLE(void)
{
#if ADC_u8_ENABLE_OR_DISABLE== ENABLE
	/*ADC Enable*/
	SET_BIT(ADCSRA, ADCSRA_ADEN);
#endif
}
