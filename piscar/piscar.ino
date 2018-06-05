#include <pisca.h>


void main() {
  inicializar();
  while (true) {

    ligarLed();
    delay(1000);
    desligarLed();
    delay(1000);

  }

}

