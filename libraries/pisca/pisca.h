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
Serial.write("*****Informacoes Montagem*****");
Serial.write("O led se encotra na porta 13;");
Serial.write("*****");
}
void informacoesExercicio(){
Serial.write("*****Informacoes Exercicio*****");
Serial.write("Exercicio na introducao a funcoes simplificadas,ambientacao e a plataforma Arduino, consiste no aluno 
\n  acender, desligar e piscar um led;");
Serial.write("*****");

}


#endif // PISCA_H_INCLUDED
