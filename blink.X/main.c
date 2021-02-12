/*
 * File:   main.c
 * Author: 20185189
 *
 * Created on 12 de Fevereiro de 2021, 15:51
 */

#include "config.h"
#include <xc.h>

void main(void) 

{
    TRISDbits.TRISD7 = 0;
    
    while(1)
    {
        PORTDbits.RD7 = 0;
        __delay_ms(500);
        PORTDbits.RD7 = 0;
        __delay_ms(500);
    }
}
