#ifndef CIDADEMALUCA_H_INCLUDED
#define CIDADEMALUCA_H_INCLUDED
#define main setup
#include <Arduino.h>

int length = 26;
char notes[] = "eeeeeeegcde fffffeeeeddedg";
int beats[] = { 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};
int tempo = 100;
boolean ledOnOff = true;
int speaker = 10;


void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speaker, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speaker, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };


  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

void inicializar() {
	pinMode(2, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(8, OUTPUT);
	pinMode(10, OUTPUT);
	
}

void ligarLedVermelhaCarro() {
	digitalWrite(2, HIGH);
}

void desligarLedVermelhaCarro() {
	digitalWrite(2, LOW);
}
void ligarLedVermelhaPedestre() {
	digitalWrite(4, HIGH);
}

void desligarLedVermelhaPedestre() {
	digitalWrite(4, LOW);
}

void ligarLedVerdePedestre() {
	digitalWrite(6, HIGH);
}

void desligarLedVerdePedestre() {
	digitalWrite(6, LOW);
}
void ligarLedVerdeCarro() {
	digitalWrite(8, HIGH);
}

void desligarLedVerdeCarro() {
	digitalWrite(8, LOW);
}
void tocarBuzina() {
	 for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo); 
      
    } else {
      playNote(notes[i], beats[i] * tempo);
      
    }
  
    delay(tempo / 2); 
  }
}


#endif // SEMAFORO_H_INCLUDED

