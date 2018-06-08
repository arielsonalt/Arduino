#include <semaforo.h>
void main() {
  inicializar();
  while (true) {
    ligarLedVerde();
    delay(3000);
    desligarLedVerde();
    ligarLedAmarelo();
    delay(1000);
    desligarLedAmarelo();
    ligarLedVermelho();
    delay(3000);
    desligarLedVermelho();
    
    }}
