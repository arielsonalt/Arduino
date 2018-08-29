#include <time.h>
#include <stdlib.h>

int verde1 = 4;
int verde2 = 8;
int vermelho1 = 2;
int vermelho2 = 6;
int length = 26;
char notes[] = "eeeeeeegcde fffffeeeeddedg";
int beats[] = { 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};
int tempo = 300;
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

  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

void setup() {
  pinMode(verde1, OUTPUT); 
  pinMode(vermelho1, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(vermelho2, OUTPUT);
  pinMode(speaker, OUTPUT);
  Serial.begin(9600);
   srand(time(NULL));
}

void loop() {
  
  // sortear 2 numeros, 
  // primeiro numero = par verde, impar vermelho
  // segundo numero = par verde, impar vermelho
  // se os dois sinais forem iguais, o speak toca

  
  int num =2;
  int numAleatorio1 = rand() % num;
 
  int numAleatorio2 = rand() % num;
  Serial.println(numAleatorio1);
  Serial.println(numAleatorio2);
  if(numAleatorio1 == 0){
    digitalWrite(vermelho1, LOW);
    digitalWrite(verde1, HIGH);
  }else {
    digitalWrite(vermelho1, HIGH);
    digitalWrite(verde1, LOW);
  }

  if(numAleatorio2 == 0){
    digitalWrite(vermelho2, LOW);
    digitalWrite(verde2, HIGH);
  }else {
    digitalWrite(vermelho2, HIGH);
    digitalWrite(verde2, LOW);
  }

  if(numAleatorio1 == 0 && numAleatorio2 == numAleatorio1){
    delay(1000);
     digitalWrite(verde1, LOW);
    digitalWrite(verde2, LOW);
    digitalWrite(vermelho1, HIGH);
    digitalWrite(vermelho2, HIGH);
    
 for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo); // rest
      
    } else {
      playNote(notes[i], beats[i] * tempo);
      
    }

    // pause between notes
    delay(tempo / 2); 
  }

 
              noTone(speaker);

    
   
    digitalWrite(speaker, LOW);
  }
  delay(2000);
}
