#include "GPIO.h"

GPIO::GPIO(){

}

void GPIO::set_input(uint8_t* DIRECTION_REGISTER, uint8_t PIN){
    DIRECTION_REGISTER &= ~(1 << PIN);
}

void GPIO::set_output(uint8_t* DIRECTION_REGISTER, uint8_t PIN){
    DIRECTION_REGISTER |= (1 << PIN);
}

void GPIO::set_high( uint8_t* PORT_REGISTER, uint8_t PIN){
    PORT_REGISTER |= (1 << PIN);
}

GPIO::~GPIO(){

}