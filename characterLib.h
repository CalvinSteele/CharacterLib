#ifndef characterLib_h_
#define characterLib_h_ 

#include "Arduino.h"
#include <stdint.h>

class characterLib {
  public:
    characterLib();
    void trueWrite(uint8_t *, int);
    void writeToDisplay(uint8_t *,int);
    static const uint8_t dataPin;
    static const uint8_t latchPin;
    static const uint8_t clockPin;
    static const uint8_t A;
    static const uint8_t C;
    static const uint8_t E;
    static const uint8_t F;
    static const uint8_t G;
    static const uint8_t H;
    static const uint8_t I;
    static const uint8_t L;
    static const uint8_t O;
    static const uint8_t P;
    static const uint8_t S;
    static const uint8_t U;
    static const uint8_t b;
    static const uint8_t c;
    static const uint8_t d;
    static const uint8_t h;
    static const uint8_t i;
    static const uint8_t l;
    static const uint8_t n;
    static const uint8_t o;
    static const uint8_t r;
    static const uint8_t t;
    static const uint8_t u;
    static const uint8_t zero;
    static const uint8_t one;
    static const uint8_t two;
    static const uint8_t three;
    static const uint8_t four;
    static const uint8_t five;
    static const uint8_t six;
    static const uint8_t seven;
    static const uint8_t eight;
    static const uint8_t nine;
    static const uint8_t dot;
    static const uint8_t none;


    static const uint8_t segment[];
};

#endif
