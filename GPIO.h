#ifndef _GPIO_H
#define _GPIO_H

#include <avr/io.h>

class GPIO{
    private:
    private:
    public:
    public:
        GPIO();
        void set_input(uint8_t* DIRECTION_REGISTER, uint8_t PIN);
        void set_output(uint8_t* DIRECTION_REGISTER, uint8_t PIN);
        void set_high(uint8_t* PORT_REGISTER, uint8_t PIN);
        void set_low(uint8_t* PORT_REGISTER, uint8_t PIN);
        void toggle_pin(uint8_t* PORT_REGISTER, uint8_t PIN);
        ~GPIO();
};


#endif //_GPIO_H