#ifndef SEMAFAROPEDCARRO_H_INCLUDED
#define SEMAFAROPEDCARRO_H_INCLUDED
#include <Arduino.h>
int verdeCarro =13;
int amareloCarro =12;
int vermelhoCarro =11;
int verdePedestre =9;
int vermelhoPedestre =8;

void inicializar(){
    pinMode(verdeCarro,OUTPUT);//
    pinMode(amareloCarro,OUTPUT);//
    pinMode(vermelhoCarro,OUTPUT);//

    pinMode(verdePedestre,OUTPUT);//
    pinMode(vermelhoPedestre,OUTPUT);//
}

void ligarVerdePedestre(){
    digitalWrite(verdePedestre,HIGH);
}

void ligarVermelhoPedestre(){
    digitalWrite(vermelhoPedestre,HIGH);
}

void ligarVerdeCarro(){
    digitalWrite(verdeCarro,HIGH);
}

void ligarAmareloCarro(){
    digitalWrite(amareloCarro,HIGH);
}

void ligarVermelhoCarro(){
    digitalWrite(vermelhoCarro,HIGH);
}

void desligarVerdePedestre(){
    digitalWrite(verdePedestre,LOW);
}

void desligarVermelhoPedestre(){
    digitalWrite(vermelhoPedestre,LOW);
}

void desligarVerdeCarro(){
    digitalWrite(verdeCarro,LOW);
}

void desligarAmareloCarro(){
    digitalWrite(amareloCarro,LOW);
}

void desligarVermelhoCarro(){
    digitalWrite(vermelhoCarro,LOW);
}

void informacoesMontagem(){
Serial.println("*****Informacoes Montagem*****");
Serial.println("O led verde para o carro se encontra na porta 13;");
Serial.println("O led amarelo para o carro se encontra na porta 12;");
Serial.println("O led vermlho para o carro se encontra na porta 11;");
Serial.println("O led verde para o pedestre se encontra na porta 9;");
Serial.println("O led vermelho para o pedestre se encontra na porta 8;");
Serial.println("*****");
}
void informacoesExercicio(){
Serial.println("*****Informacoes Exercicio*****");
Serial.println("Exercicio para a construir uma simulacao de um semafaro para carro e um para pedestre sobre a mesma rua, 
\n o semaforo deve estar vermelho para o carro quando o verde estivar para o pedestre, e vice-versa, lembrando que o semaforo do carro possui o amarelo. ");
Serial.println("*****");

}


#endif // PISCA_H_INCLUDED
