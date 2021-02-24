/*
 * File:   delay.c
 * Author: 20185090
 *
 * Created on 18 de Fevereiro de 2021, 15:56
 */

#include <xc.h>
#include "config.h"

void delay( unsigned int t )
{
    while( t )
    {
        __delay_ms(1);
        --t;
    }
}
