#include <avr/io.h>
#include <stdbool.h>
#include <util/delay.h>

//#include "UsrLibs/AVR_Atmega328p_Core/BitOperators.h"
//#include "UsrLibs/AVR_Atmega328p_Core/Millis.h"
#include "UsrLibs/AVR_Atmega328p_Core/UART.h"
#include "UsrLibs/AVR_Lib_MAX7219/max7219.h"

// DEFINES
///////////////////////////////////////////

// VARIABLES
///////////////////////////////////////////
// int32_t mls_uart_print;

// FUNCTIONS
///////////////////////////////////////////

// INTERRUPTS
///////////////////////////////////////////

// MAIN
//////////////////////////////////////////////////////////////////////////////////////
int main(void) {
    UART_Init(115200);

    max7219_t max = {
        0,
    };
    max.cs_port = &PORTB;
    max.cs_pin = PB2;

    MAX7219_Init(&max);
    max.buf[0] = _P;
    max.buf[1] = _E;
    max.buf[2] = _N;
    max.buf[3] = _i;
    max.buf[4] = _S;
    MAX7219_Flush(&max);
    // MAX7219_DrawBar(2, &max);
    UART_WriteStr("Sho tam!\r\n");
    

    while (1) {
        /*         UART_WriteStr("Sho tam!\r\n");
                TOGGLE_BIT(PORTB, PORTB5);
                _delay_ms(1000); */
    }
}
