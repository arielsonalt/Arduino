#include <cidademaluca.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
   inicializar();
   Serial.begin(9600);
   srand(time(NULL));
  while(true){
int num =2;
  int numAleatorio1 = rand() % num;
  Serial.print("num1:");
  Serial.println(numAleatorio1);
   int numAleatorio2 = rand() % num;
    Serial.print("num2:");
  Serial.print(numAleatorio2);
   
  if(numAleatorio1 == 0){
    desligarLedVermelhaCarro();
    ligarLedVerdeCarro();
  }else {
    desligarLedVerdeCarro();
    ligarLedVermelhaCarro();
    
  }

  if(numAleatorio2 == 0){
   desligarLedVermelhaPedestre();
    ligarLedVerdePedestre();
  }else {
    ligarLedVermelhaPedestre();
    desligarLedVerdePedestre();
  }

  if(numAleatorio1 == 0 && numAleatorio2 == 0){
    delay(1000);
  desligarLedVerdeCarro();
  desligarLedVerdePedestre();
  ligarLedVermelhaCarro();
  ligarLedVermelhaPedestre();
  tocarBuzina();  

  }
  delay(2000);
    }
  
  }
