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