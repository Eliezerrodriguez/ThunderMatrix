#ifndef ThunderMatrix_h
#define ThunderMatrix_h

#include "Arduino.h"
#include "Arduino_LED_Matrix.h"

class ThunderMatrix {
  public:
    ThunderMatrix();
    void begin();

    void showThunder();
    void showHeart();
    void showSmiley();

  private:
    ArduinoLEDMatrix matrix;
};

#endif
