#ifndef MATRIZ4X4_H_INCLUDED
#define MATRIZ4X4_H_INCLUDED
#include <Arduino.h>


void inicializar(){
    pinMode(1,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
    pinMode(14,OUTPUT);
    pinMode(15,OUTPUT);
    pinMode(16,OUTPUT);
    
}

void ligarLed(int linha,int coluna){
    if(linha==0 && coluna==0){digitalWrite(1, HIGH);}
    if(linha==0 && coluna==1){digitalWrite(2, HIGH);}
    if(linha==0 && coluna==2){digitalWrite(3, HIGH);}
    if(linha==0 && coluna==3){digitalWrite(4, HIGH);}
    if(linha==1 && coluna==0){digitalWrite(5, HIGH);}
    if(linha==1 && coluna==1){digitalWrite(6, HIGH);}
    if(linha==1 && coluna==2){digitalWrite(7, HIGH);}
    if(linha==1 && coluna==3){digitalWrite(8, HIGH);}
    if(linha==2 && coluna==0){digitalWrite(9, HIGH);}
    if(linha==2 && coluna==1){digitalWrite(10, HIGH);}
    if(linha==2 && coluna==2){digitalWrite(11, HIGH);}
    if(linha==2 && coluna==3){digitalWrite(12, HIGH);}
    if(linha==3 && coluna==0){digitalWrite(13, HIGH);}
    if(linha==3 && coluna==1){digitalWrite(14, HIGH);}
    if(linha==3 && coluna==2){digitalWrite(15, HIGH);}
    if(linha==3 && coluna==3){digitalWrite(16, HIGH);}
}

void desligarLed(int linha,int coluna){
    if(linha==0 && coluna==0){digitalWrite(1, LOW);}
    if(linha==0 && coluna==1){digitalWrite(2, LOW);}
    if(linha==0 && coluna==2){digitalWrite(3, LOW);}
    if(linha==0 && coluna==3){digitalWrite(4, LOW);}
    if(linha==1 && coluna==0){digitalWrite(5, LOW);}
    if(linha==1 && coluna==1){digitalWrite(6, LOW);}
    if(linha==1 && coluna==2){digitalWrite(7, LOW);}
    if(linha==1 && coluna==3){digitalWrite(8, LOW);}
    if(linha==2 && coluna==0){digitalWrite(9, LOW);}
    if(linha==2 && coluna==1){digitalWrite(10, LOW);}
    if(linha==2 && coluna==2){digitalWrite(11, LOW);}
    if(linha==2 && coluna==3){digitalWrite(12, LOW);}
    if(linha==3 && coluna==0){digitalWrite(13, LOW);}
    if(linha==3 && coluna==1){digitalWrite(14, LOW);}
    if(linha==3 && coluna==2){digitalWrite(15, LOW);}
    if(linha==3 && coluna==3){digitalWrite(16, LOW);}
}

void informacoesMontagem(){
Serial.println("*****Informacoes Montagem*****");
Serial.println("Os LEDs estão dispostos nas portas de 1 à 16, em que o LED da 1 linha e da 1 coluna 
é o LED 1 e o o LED da 1 linha e da 2 coluna é o LED 2 e assim em diante");



Serial.println("*****");
}


#endif // PISCA_H_INCLUDED
