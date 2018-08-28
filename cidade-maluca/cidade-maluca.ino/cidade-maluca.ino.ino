#include <time.h>
#include <stdlib.h>

int verde1 = 4;
int verde2 = 8;
int vermelho1 = 2;
int vermelho2 = 6;
int speaker = 10;

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
    digitalWrite(speaker, HIGH);
    delay(1000);
    digitalWrite(verde1, LOW);
    digitalWrite(verde2, LOW);
    digitalWrite(vermelho1, HIGH);
    digitalWrite(vermelho2, HIGH);
    delay(3000);
    digitalWrite(speaker, LOW);
  }
  delay(2000);
}
