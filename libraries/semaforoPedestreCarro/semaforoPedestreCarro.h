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
Serial.write("*****Informacoes Montagem*****");
Serial.write("O led verde para o carro se encotra na porta 13;");
Serial.write("O led amarelo para o carro se encotra na porta 12;");
Serial.write("O led vermlho para o carro se encotra na porta 11;");
Serial.write("O led verde para o pedestre se encotra na porta 9;");
Serial.write("O led vermelho para o pedestre se encotra na porta 8;");
Serial.write("*****");
}
void informacoesExercicio(){
Serial.write("*****Informacoes Exercicio*****");
Serial.write("Exercicio para a construir uma simulacao de um semafaro para carro e um para pedestre sobre a mesma rua, 
\n o semafao deve estar vermelho para o carro quando o verde estivar para o pedestre, e vice-versa, lembrando que o semafaro do carro possui o amarelo. ");
Serial.write("*****");

}


#endif // PISCA_H_INCLUDED
