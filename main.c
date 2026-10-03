#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

#include "UsrLibs/AVR_Atmega328p_Core/BitOperators.h"
#include "UsrLibs/AVR_Atmega328p_Core/UART.h"
//#include "UsrLibs/AVR_Atmega328p_Core/BitOperators.h"
//#include "UsrLibs/AVR_Atmega328p_Core/Millis.h"


//DEFINES
///////////////////////////////////////////

//VARIABLES
///////////////////////////////////////////
//int32_t mls_uart_print;

//FUNCTIONS
///////////////////////////////////////////

//INTERRUPTS
///////////////////////////////////////////



//MAIN
//////////////////////////////////////////////////////////////////////////////////////
int main(void){
    UART_Init(115200);
    SET_BIT(DDRB, DDB5);

    while(1){
        UART_WriteStr("Sho tam nahui!\r\n");
        TOGGLE_BIT(PORTB, PORTB5);
        _delay_ms(100);
    
  }
}
