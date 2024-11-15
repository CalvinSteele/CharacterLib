#include "characterLib.h"
#include "Arduino.h"
#include <stdint.h>



characterLib::mt[] = {
    none,
    none,
    none,
    none
}

characterLib::segment[] = { 
  0xF1, 
  0xF2, 
  0xF4, 
  0xF8
}

characterLib::trueWrite(uint8_t info, int Segment)
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, info);
  shiftOut(dataPin, clockPin, MSBFIRST, segment[Segment-1]);
  digitalWrite(latchPin, HIGH);
}

characterLib::writeToDisplay(uint8_t *textToShow,int size)
{
   for (int q = 0; q < (size); q++) {
      trueWrite(textToShow[q], q+1);
   } 
}

characterLib::dataPin = 8;
characterLib::latchPin = 4;
characterLib::clockPin = 7;

characterLib::A = B10001000;
characterLib::C = B11000110;
characterLib::E = B10000110;
characterLib::F = B10001110;
characterLib::G = B11000010;
characterLib::H = B10001001;
characterLib::I = B11111001;
characterLib::L = B11000111;
characterLib::O = B11000000;
characterLib::P = B10001100;
characterLib::S = B10010010;
characterLib::U = B11000001;
characterLib::b = B10000011;
characterLib::c = B10100111;
characterLib::d = B10100001;
characterLib::h = B10001011;
characterLib::i = B11111011;
characterLib::l = B11001111;
characterLib::n = B10101011;
characterLib::o = B10100011;
characterLib::r = B10101111;
characterLib::t = B10000111;
characterLib::u = B11100011;
characterLib::zero = B11000000;
characterLib::one = B11111001;
characterLib::two = B10100100;
characterLib::three = B10110000;
characterLib::four = B10011001;
characterLib::five = B10010010;
characterLib::six = B10000010;
characterLib::seven = B11111000;
characterLib::eight = B10000000;
characterLib::nine = B10010000;
characterLib::dot = B01111111;
characterLib::none = B11111111;
