#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include <string.h>

#include "UART.h"
#include "ADC.h"
#include "commands.h"
#include "GPIO.h"

//Peripheral objects
UART uart;
_ADC adc;
GPIO gpio;

ADC_channel_value adc_values;

char response[5];

ISR (USART0_RX_vect){
	uart.receive_buffer[uart.buffer_position] = uart.receive_char();
	if(uart.receive_buffer[uart.buffer_position] == '\n') {
		uart.is_endline = true;
    }
    uart.buffer_position++;
	if(uart.buffer_position > BUFFER_SIZE) uart.buffer_position = 0;
}

ISR(ADC_vect){
	adc_values = adc.get_value();	
}

void listen(){
	if(uart.is_endline){
		if(strncmp(uart.receive_buffer,FETCH_ADC0,(sizeof(FETCH_ADC0)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_0,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC1,(sizeof(FETCH_ADC1)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_1,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC2,(sizeof(FETCH_ADC2)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_2,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC3,(sizeof(FETCH_ADC3)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_3,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC4,(sizeof(FETCH_ADC4)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_4,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC5,(sizeof(FETCH_ADC5)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_5,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC6,(sizeof(FETCH_ADC6)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_6,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC7,(sizeof(FETCH_ADC7)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_7,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC8,(sizeof(FETCH_ADC8)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_8,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC9,(sizeof(FETCH_ADC9)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_9,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC10,(sizeof(FETCH_ADC10)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_10,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC11,(sizeof(FETCH_ADC11)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_11,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC12,(sizeof(FETCH_ADC12)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_12,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC13,(sizeof(FETCH_ADC13)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_13,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC14,(sizeof(FETCH_ADC14)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_14,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		else if(strncmp(uart.receive_buffer,FETCH_ADC15,(sizeof(FETCH_ADC15)/sizeof(char))-1) == 0){
			adc.convert();
			_delay_us(500);
			itoa(adc_values.channel_15,response,10);
			uart.send_string(response);
			uart.send_char(new_line);
			uart.flush_buffer();
		
		}
		/*******************************************************************************************
		 *  SET INPUT PIN
		 * *****************************************************************************************/
		else if(strncmp(uart.receive_buffer,PINA0_INPUT,(sizeof(PINA0_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRA,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA1_INPUT,(sizeof(PINA1_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRA,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA2_INPUT,(sizeof(PINA2_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRA,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA3_INPUT,(sizeof(PINA3_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRA,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA4_INPUT,(sizeof(PINA4_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRA,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA5_INPUT,(sizeof(PINA5_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRA,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA6_INPUT,(sizeof(PINA6_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRA,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA7_INPUT,(sizeof(PINA7_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRA,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB0_INPUT,(sizeof(PINB0_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRB,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB1_INPUT,(sizeof(PINB1_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRB,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB2_INPUT,(sizeof(PINB2_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRB,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB3_INPUT,(sizeof(PINB3_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRB,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB4_INPUT,(sizeof(PINB4_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRB,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB5_INPUT,(sizeof(PINB5_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRB,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB6_INPUT,(sizeof(PINB6_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRB,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB7_INPUT,(sizeof(PINB7_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRB,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC0_INPUT,(sizeof(PINC0_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRC,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC1_INPUT,(sizeof(PINC1_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRC,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC2_INPUT,(sizeof(PINC2_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRA,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC3_INPUT,(sizeof(PINC3_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRC,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC4_INPUT,(sizeof(PINC4_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRC,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC5_INPUT,(sizeof(PINC5_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRC,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC6_INPUT,(sizeof(PINC6_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRC,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC7_INPUT,(sizeof(PINC7_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRC,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND0_INPUT,(sizeof(PIND0_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRD,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND1_INPUT,(sizeof(PIND1_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRD,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND2_INPUT,(sizeof(PIND2_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRD,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND3_INPUT,(sizeof(PIND3_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRD,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND4_INPUT,(sizeof(PIND4_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRD,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND5_INPUT,(sizeof(PIND5_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRD,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND6_INPUT,(sizeof(PIND6_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRD,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND7_INPUT,(sizeof(PIND7_INPUT)/sizeof(char))-1) == 0){
			gpio.set_input(DDRD,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}

				/*******************************************************************************************
		 *  SET OUTPUT PIN
		 * *****************************************************************************************/
		else if(strncmp(uart.receive_buffer,PINA0_OUTPUT,(sizeof(PINA0_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRA,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA1_OUTPUT,(sizeof(PINA1_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRA,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA2_OUTPUT,(sizeof(PINA2_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRA,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA3_OUTPUT,(sizeof(PINA3_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRA,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA4_OUTPUT,(sizeof(PINA4_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRA,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA5_OUTPUT,(sizeof(PINA5_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRA,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA6_OUTPUT,(sizeof(PINA6_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRA,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA7_OUTPUT,(sizeof(PINA7_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRA,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB0_OUTPUT,(sizeof(PINB0_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRB,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB1_OUTPUT,(sizeof(PINB1_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRB,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB2_OUTPUT,(sizeof(PINB2_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRB,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB3_OUTPUT,(sizeof(PINB3_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRB,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB4_OUTPUT,(sizeof(PINB4_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRB,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB5_OUTPUT,(sizeof(PINB5_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRB,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB6_OUTPUT,(sizeof(PINB6_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRB,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB7_OUTPUT,(sizeof(PINB7_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRB,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC0_OUTPUT,(sizeof(PINC0_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRC,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC1_OUTPUT,(sizeof(PINC1_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRC,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC2_OUTPUT,(sizeof(PINC2_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRA,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC3_OUTPUT,(sizeof(PINC3_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRC,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC4_OUTPUT,(sizeof(PINC4_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRC,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC5_OUTPUT,(sizeof(PINC5_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRC,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC6_OUTPUT,(sizeof(PINC6_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRC,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC7_OUTPUT,(sizeof(PINC7_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRC,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND0_OUTPUT,(sizeof(PIND0_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRD,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND1_OUTPUT,(sizeof(PIND1_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRD,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND2_OUTPUT,(sizeof(PIND2_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRD,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND3_OUTPUT,(sizeof(PIND3_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRD,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND4_OUTPUT,(sizeof(PIND4_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRD,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND5_OUTPUT,(sizeof(PIND5_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRD,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND6_OUTPUT,(sizeof(PIND6_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRD,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND7_OUTPUT,(sizeof(PIND7_OUTPUT)/sizeof(char))-1) == 0){
			gpio.set_output(DDRD,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}

				/*******************************************************************************************
		 *  SET  PIN HIGH
		 * *****************************************************************************************/
		else if(strncmp(uart.receive_buffer,PINA0_HIGH,(sizeof(PINA0_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRA,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA1_HIGH,(sizeof(PINA1_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRA,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA2_HIGH,(sizeof(PINA2_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRA,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA3_HIGH,(sizeof(PINA3_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRA,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA4_HIGH,(sizeof(PINA4_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRA,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA5_HIGH,(sizeof(PINA5_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRA,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA6_HIGH,(sizeof(PINA6_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRA,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA7_HIGH,(sizeof(PINA7_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRA,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB0_HIGH,(sizeof(PINB0_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRB,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB1_HIGH,(sizeof(PINB1_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRB,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB2_HIGH,(sizeof(PINB2_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRB,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB3_HIGH,(sizeof(PINB3_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRB,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB4_HIGH,(sizeof(PINB4_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRB,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB5_HIGH,(sizeof(PINB5_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRB,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB6_HIGH,(sizeof(PINB6_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRB,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB7_HIGH,(sizeof(PINB7_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRB,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC0_HIGH,(sizeof(PINC0_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRC,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC1_HIGH,(sizeof(PINC1_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRC,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC2_HIGH,(sizeof(PINC2_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRA,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC3_HIGH,(sizeof(PINC3_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRC,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC4_HIGH,(sizeof(PINC4_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRC,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC5_HIGH,(sizeof(PINC5_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRC,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC6_HIGH,(sizeof(PINC6_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRC,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC7_HIGH,(sizeof(PINC7_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRC,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND0_HIGH,(sizeof(PIND0_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRD,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND1_HIGH,(sizeof(PIND1_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRD,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND2_HIGH,(sizeof(PIND2_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRD,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND3_HIGH,(sizeof(PIND3_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRD,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND4_HIGH,(sizeof(PIND4_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRD,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND5_HIGH,(sizeof(PIND5_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRD,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND6_HIGH,(sizeof(PIND6_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRD,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND7_HIGH,(sizeof(PIND7_HIGH)/sizeof(char))-1) == 0){
			gpio.set_high(DDRD,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}

		/*******************************************************************************************
		 *  SET PIN LOW
		 * *****************************************************************************************/
		else if(strncmp(uart.receive_buffer,PINA0_LOW,(sizeof(PINA0_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRA,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA1_LOW,(sizeof(PINA1_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRA,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA2_LOW,(sizeof(PINA2_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRA,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA3_LOW,(sizeof(PINA3_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRA,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA4_LOW,(sizeof(PINA4_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRA,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA5_LOW,(sizeof(PINA5_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRA,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA6_LOW,(sizeof(PINA6_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRA,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINA7_LOW,(sizeof(PINA7_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRA,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB0_LOW,(sizeof(PINB0_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRB,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB1_LOW,(sizeof(PINB1_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRB,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB2_LOW,(sizeof(PINB2_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRB,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB3_LOW,(sizeof(PINB3_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRB,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB4_LOW,(sizeof(PINB4_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRB,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB5_LOW,(sizeof(PINB5_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRB,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB6_LOW,(sizeof(PINB6_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRB,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINB7_LOW,(sizeof(PINB7_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRB,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC0_LOW,(sizeof(PINC0_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRC,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC1_LOW,(sizeof(PINC1_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRC,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC2_LOW,(sizeof(PINC2_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRA,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC3_LOW,(sizeof(PINC3_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRC,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC4_LOW,(sizeof(PINC4_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRC,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC5_LOW,(sizeof(PINC5_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRC,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC6_LOW,(sizeof(PINC6_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRC,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PINC7_LOW,(sizeof(PINC7_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRC,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND0_LOW,(sizeof(PIND0_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRD,PIN0);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND1_LOW,(sizeof(PIND1_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRD,PIN1);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND2_LOW,(sizeof(PIND2_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRD,PIN2);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND3_LOW,(sizeof(PIND3_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRD,PIN3);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND4_LOW,(sizeof(PIND4_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRD,PIN4);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND5_LOW,(sizeof(PIND5_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRD,PIN5);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND6_LOW,(sizeof(PIND6_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRD,PIN6);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else if(strncmp(uart.receive_buffer,PIND7_LOW,(sizeof(PIND7_LOW)/sizeof(char))-1) == 0){
			gpio.set_low(DDRD,PIN7);
			uart.send_string(default_reply);
			uart.send_char(new_line);
			uart.flush_buffer();
		}
		else{
			uart.flush_buffer();
		}

		uart.is_endline = false;
	}
}



int main(void)
{
	uart.init(9600);
	adc.init();

	while (1) {
		listen();
    }
}