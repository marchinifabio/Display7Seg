/*
 * File:   main.c
 * Author: 20185090
 *
 * Created on 24 de Fevereiro de 2021, 14:22
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "display7seg.h"




void main(void) 
{
    int cont = 0;
    display7seg_init();
    while( 1 )
    {
        display7seg( cont );
        delay( 1000 );
        ++cont;
        if( cont >= 20 )
            cont = 0;
    }
}
