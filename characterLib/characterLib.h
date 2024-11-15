#ifndef characterLib_h_
#define characterLib_h_ 

#include "Arduino.h"
#include <stdint.h>

class characterLib {
  public:
    const uint8_t A;
    const uint8_t C;
    const uint8_t E;
    const uint8_t F;
    const uint8_t G;
    const uint8_t H;
    const uint8_t I;
    const uint8_t L;
    const uint8_t O;
    const uint8_t P;
    const uint8_t S;
    const uint8_t U;
    const uint8_t b;
    const uint8_t c;
    const uint8_t d;
    const uint8_t h;
    const uint8_t i;
    const uint8_t l;
    const uint8_t n;
    const uint8_t o;
    const uint8_t r;
    const uint8_t t;
    const uint8_t u;
    const uint8_t zero;
    const uint8_t one;
    const uint8_t two;
    const uint8_t three;
    const uint8_t four;
    const uint8_t five;
    const uint8_t six;
    const uint8_t seven;
    const uint8_t eight;
    const uint8_t nine;
    const uint8_t dot;
    const uint8_t none;

    const uint8_t mt[5];

    const uint8_t segment[5];

    void trueWrite(byte info, int Segment);
    void writeToDisplay(byte *textToShow,int size);


  private:
    const int dataPin;
    const int latchPin;
    const int clockPin;
};


#endif