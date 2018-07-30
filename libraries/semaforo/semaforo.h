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

#endif // SEMAFORO_H_INCLUDED

