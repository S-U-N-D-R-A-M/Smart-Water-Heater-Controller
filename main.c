#include <avr/io.h>
#define F_CPU 8000000
#include <util/delay.h>


void digit(uint8_t a) {
	PORTB &= ~(1 << PINB0);
    PORTB &=~(1<<PINB1);
	switch (a) {
		case 0:
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0);PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB&=~(1<<PINB1);
		
		break;

		case 1:
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0); PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0); PORTB&=~(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		
		break;

		case 2:
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0); PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB&=~(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB1); PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0); PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB&=~(1<<PINB1); PORTB|=(1<<PINB0);PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB1); PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0); PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB&=~(1<<PINB1);
		
		break;

		case 3:
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);	PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB&=~(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);	PORTB|=(1<<PINB1);  PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0); PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0); PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB&=~(1<<PINB1);
		
		break;

		case 4:
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0); PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB&=~(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0); PORTB&=~(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		
		break;

		case 5:
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB&=~(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB&=~(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB&=~(1<<PINB1);
		break;

		case 6:
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB&=~(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB&=~(1<<PINB1);

		break;

		case 7:
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB1); PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0); PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB&=~(1<<PINB1);

		break;

		case 8:
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB&=~(1<<PINB1);

		break;

		case 9:
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB&=~(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB1);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);
		PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB|=(1<<PINB0); PORTB&=~(1<<PINB0);PORTB&=~(1<<PINB1);
		break;
	}
}
   
   
void EEPROM_write( uint8_t data) {
	while (EECR & (1 << EEPE)); // Wait until previous write is complete

	EEARL =  0xFF;       // Set lower 8 bits of address
	//EEARH = (addr >> 8) & 0x01; // Set higher bit (ATtiny88 has 512 bytes of EEPROM)

	EEDR = data;  // Load data into EEPROM Data Register

	EECR |= (1 << EEMPE); // Enable EEPROM write (must be set before EEPE)
	EECR |= (1 << EEPE);  // Start EEPROM write
}


uint8_t EEPROM_read()
{
	/* Wait for completion of previous write */
	while(EECR & (1<<EEPE));
	
	/* Set up address register */
	EEARL = 0x00;
	/* Start eeprom read by writing EERE */
	EECR |= (1<<EERE);
	/* Return data from data register */
	return EEDR;
}

uint8_t temp=30;
	

void adc_init()
{
	ADMUX=0b00000000;
	ADCSRA |= (1 << ADEN)|(1<<ADPS2)|(1<<ADPS1);
	 ADMUX |= (1 << REFS0);
}
uint16_t adc_read()
{
    ADCSRA|=(1<<ADSC);
	while (ADCSRA & (1 << ADSC));
	return ADC;
}

int main(void) {
	uint16_t count=0;
	uint8_t digit1=0;
	uint8_t digit2=0;
	DDRB |= (1 << PINB0) | (1 << PINB1) | (1 << PINB2) | (1 << PINB3) | (1 << PINB4)|(1<<PINB5)|(1<<PINB6);
	DDRB&=~(1<<PINB7);
	PORTB &=~( (1 << PINB0) | (1 << PINB1) | (1 << PINB2)|(1<<PINB7)) ;
	PORTB|= (1 << PINB3) | (1 << PINB4)|(1 << PINB5)|(1 << PINB6);
	DDRC &=~(1<<PINC0);
	DDRC|=(1<<PINC1);
	PORTC&=~((1<<PINC2)|(1<<PINC1));
	PORTC &=~(1<<PINC0);
	adc_init();
	temp=EEPROM_read();
	uint8_t temp_0=temp;
    uint8_t digit3=temp/10;
	uint8_t  digit4=temp%10;
	//sei();
	
	
		while (1) {
			
			// Display digit 1
			  if (PINB & (1<<PINB7))
			  {
				  if (temp>98)
				  {
					  temp=30;
				  }
				  temp++;
				  _delay_ms(20);
				 digit3=temp/10;
				 digit4=temp%10;
			  }
			count=adc_read()/11;
			
			
			digit1=count/10;
			digit2=count%10;
			
			//digit 1
			PORTB &= ~(1 << PINB3); // Ground digit 1
			digit(digit1);
			PORTB |= (1 << PINB2);  // Latch output
			_delay_ms(1);
			PORTB &= ~(1 << PINB2); // Unlatch
			PORTB |= (1 << PINB3);  // Unground digit 1

			// Display digit 2
			PORTB &= ~(1 << PINB4); // Ground digit 2
			digit(digit2);
			
			PORTB |= (1 << PINB2);  // Latch output
			_delay_ms(1);
			PORTB &= ~(1 << PINB2); // Unlatch
			PORTB |= (1 << PINB4);  // Unground digit 2

			// Display digit 3
			PORTB &= ~(1 << PINB5); // Ground digit 3
			digit(digit3);
			PORTB |= (1 << PINB2);  // Latch output
			_delay_ms(1);
			PORTB &= ~(1 << PINB2); // Unlatch
			PORTB |= (1 << PINB5);  // Unground digit 3

			// Display digit 4
			PORTB &= ~(1 << PINB6); // Ground digit 4
			digit(digit4);
			PORTB |= (1 << PINB2);  // Latch output
			_delay_ms(1);
			PORTB &= ~(1 << PINB2); // Unlatch
			PORTB |= (1 << PINB6);  // Unground digit 4
			
			if (count<temp)
			{
				PORTC|=(1<<PINC1);
			}
			else{
				PORTC&=~(1<<PINC1);
			}
			
			if (temp_0!=temp)
			{
				
					while (EECR & (1 << EEPE)); // Wait until previous write is complete

					EEARL =  0x00;       // Set lower 8 bits of address
				//	EEARH = (addr >> 8) & 0x01; // Set higher bit (ATtiny88 has 512 bytes of EEPROM)

					EEDR = temp;  // Load data into EEPROM Data Register

					EECR |= (1 << EEMPE); // Enable EEPROM write (must be set before EEPE)
					EECR |= (1 << EEPE);  // Start EEPROM write
				 temp_0=temp;

			}
			
		}
		}

