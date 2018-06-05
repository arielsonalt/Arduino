#ifndef PISCA_H_INCLUDED
#define PISCA_H_INCLUDED
#define main setup
#include <Arduino.h>

void inicializar(){
    pinMode(13,OUTPUT);
}

void ligarLed(){
    digitalWrite(13,HIGH);
}

void desligarLed(){
    digitalWrite(13,LOW);
}



#endif // PISCA_H_INCLUDED
