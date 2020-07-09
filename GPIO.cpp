#include "GPIO.h"

GPIO::GPIO(){

}

void GPIO::set_input(volatile uint8_t* DIRECTION_REGISTER, uint8_t PIN){
    *DIRECTION_REGISTER &= ~(1 << PIN);
}

void GPIO::set_output(volatile uint8_t* DIRECTION_REGISTER, uint8_t PIN){
    *DIRECTION_REGISTER |= (1 << PIN);
}

void GPIO::set_high(volatile uint8_t* PORT_REGISTER, uint8_t PIN){
    *PORT_REGISTER |= (1 << PIN);
}

void GPIO::set_low(volatile uint8_t* PORT_REGISTER, uint8_t PIN){
    *PORT_REGISTER &= ~(1 << PIN);
}

void GPIO::toggle_pin(volatile uint8_t* PORT_REGISTER, uint8_t PIN){
    *PORT_REGISTER ^= (1 << PIN);
}

GPIO::~GPIO(){

}