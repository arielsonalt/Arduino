#ifndef SEMAFORO_H_INCLUDED
#define SEMAFORO_H_INCLUDED
#define main setup
#include <Arduino.h>


void inicializar() {
	pinMode(8, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(12, OUTPUT);
}

void ligarLedVermelho() {
	digitalWrite(8, HIGH);
}

void desligarLedVermelho() {
	digitalWrite(8, LOW);
}
void ligarLedAmarelo() {
	digitalWrite(10, HIGH);
}

void desligarLedAmarelo() {
	digitalWrite(10, LOW);
}

void ligarLedVerde() {
	digitalWrite(12, HIGH);
}

void desligarLedVerde() {
	digitalWrite(12, LOW);
}

void informacoesMontagem(){
Serial.println("*****Informacoes Montagem*****");
Serial.println("O led verde se encontra na porta 12;");
Serial.println("O led amarelo se encontra na porta 10;");
Serial.println("O led vermelho se encontra na porta 8;");
Serial.println("*****");
}

#endif // SEMAFORO_H_INCLUDED

