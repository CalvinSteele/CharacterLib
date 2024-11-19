#ifndef characterLib_h_
#define characterLib_h_ 

#include "Arduino.h"
#include <stdint.h>

class characterLib {
  public:
    characterLib();
    void trueWrite(uint8_t *, int);
    void writeToDisplay(uint8_t *,int);
    static constexpr uint8_t dataPin;
    static constexpr uint8_t latchPin;
    static constexpr uint8_t clockPin;
    static constexpr uint8_t A;
    static constexpr uint8_t C;
    static constexpr uint8_t E;
    static constexpr uint8_t F;
    static constexpr uint8_t G;
    static constexpr uint8_t H;
    static constexpr uint8_t I;
    static constexpr uint8_t L;
    static constexpr uint8_t O;
    static constexpr uint8_t P;
    static constexpr uint8_t S;
    static constexpr uint8_t U;
    static constexpr uint8_t b;
    static constexpr uint8_t c;
    static constexpr uint8_t d;
    static constexpr uint8_t h;
    static constexpr uint8_t i;
    static constexpr uint8_t l;
    static constexpr uint8_t n;
    static constexpr uint8_t o;
    static constexpr uint8_t r;
    static constexpr uint8_t t;
    static constexpr uint8_t u;
    static constexpr uint8_t zero;
    static constexpr uint8_t one;
    static constexpr uint8_t two;
    static constexpr uint8_t three;
    static constexpr uint8_t four;
    static constexpr uint8_t five;
    static constexpr uint8_t six;
    static constexpr uint8_t seven;
    static constexpr uint8_t eight;
    static constexpr uint8_t nine;
    static constexpr uint8_t dot;
    static constexpr uint8_t none;


    static constexpr uint8_t segment[];
};

#endif
