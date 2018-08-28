#include <semaforo.h>
void main() {
  inicializar();
  while (true) {
    ligarLedVerde();
    delay(5000);
    desligarLedVerde();
    ligarLedAmarelo();
    delay(2000);
    desligarLedAmarelo();
    ligarLedVermelho();
    delay(5000);
    desligarLedVermelho();
    
    }}
