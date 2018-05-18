#ifndef SEMAFORO_H_INCLUDED
#define SEMAFORO_H_INCLUDED
#include <Arduino.h>


void inicializar() {
	pinMode(8, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(12, OUTPUT);
}

void ligarLedVermelha() {
	digitalWrite(8, HIGH);
}

void desligarLedVermelha() {
	digitalWrite(8, LOW);
}
dvoid ligarLedAmarela() {
	digitalWrite(10, HIGH);
}

void desligarLedAmarela() {
	digitalWrite(10, LOW);
}

void ligarLedVerde() {
	digitalWrite(12, HIGH);
}

void desligarLedVerde() {
	digitalWrite(12, LOW);
}

#endif // SEMAFORO_H_INCLUDED

