#include <ThunderMatrix.h>

ThunderMatrix thunder;

void setup() {
  thunder.begin();

  thunder.showThunder();
  delay(2000);
  thunder.showHeart();
  delay(2000);
  thunder.showSmiley();
}

void loop() {
  // mantiene el último ícono encendido
}
