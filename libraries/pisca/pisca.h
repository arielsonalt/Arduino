#ifndef PISCA_H_INCLUDED
#define PISCA_H_INCLUDED
#include <Arduino.h>


void inicializar(){
    pinMode(13,OUTPUT);
}

void ligar(){
    digitalWrite(13,HIGH);
}

void desligar(){
    digitalWrite(13,LOW);
}
void informacoesMontagem(){
Serial.println("*****Informacoes Montagem*****");
Serial.println("O led se encotra na porta 13;");
Serial.println("*****");
}
void informacoesExercicio(){
Serial.println("*****Informacoes Exercicio*****");
Serial.println("Exercicio na introducao a funcoes simplificadas,ambientacao e a plataforma Arduino, consiste no aluno 
\n  acender, desligar e piscar um led;");
Serial.println("*****");

}


#endif // PISCA_H_INCLUDED
