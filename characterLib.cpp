#include "characterLib.h"
#include "Arduino.h"
#include <stdint.h>
static constexpr uint8_t characterLib::dataPin = 8;
static constexpr uint8_t characterLib::latchPin = 4;
static constexpr uint8_t characterLib::clockPin = 7;
static constexpr uint8_t characterLib::A = B10001000;
static constexpr uint8_t characterLib::C = B11000110;
static constexpr uint8_t characterLib::E = B10000110;
static constexpr uint8_t characterLib::F = B10001110;
static constexpr uint8_t characterLib::G = B11000010;
static constexpr uint8_t characterLib::H = B10001001;
static constexpr uint8_t characterLib::I = B11111001;
static constexpr uint8_t characterLib::L = B11000111;
static constexpr uint8_t characterLib::O = B11000000;
static constexpr uint8_t characterLib::P = B10001100;
static constexpr uint8_t characterLib::S = B10010010;
static constexpr uint8_t characterLib::U = B11000001;
static constexpr uint8_t characterLib::b = B10000011;
static constexpr uint8_t characterLib::c = B10100111;
static constexpr uint8_t characterLib::d = B10100001;
static constexpr uint8_t characterLib::h = B10001011;
static constexpr uint8_t characterLib::i = B11111011;
static constexpr uint8_t characterLib::l = B11001111;
static constexpr uint8_t characterLib::n = B10101011;
static constexpr uint8_t characterLib::o = B10100011;
static constexpr uint8_t characterLib::r = B10101111;
static constexpr uint8_t characterLib::t = B10000111;
static constexpr uint8_t characterLib::u = B11100011;
static constexpr uint8_t characterLib::zero = B11000000;
static constexpr uint8_t characterLib::one = B11111001;
static constexpr uint8_t characterLib::two = B10100100;
static constexpr uint8_t characterLib::three = B10110000;
static constexpr uint8_t characterLib::four = B10011001;
static constexpr uint8_t characterLib::five = B10010010;
static constexpr uint8_t characterLib::six = B10000010;
static constexpr uint8_t characterLib::seven = B11111000;
static constexpr uint8_t characterLib::eight = B10000000;
static constexpr uint8_t characterLib::nine = B10010000;
static constexpr uint8_t characterLib::dot = B01111111;
static constexpr uint8_t characterLib::none = B11111111;

static constexpr uint8_t characterLib::segment[] = { 0xF1, 0xF2, 0xF4, 0xF8};
characterLib::characterLib()
{
  	pinMode(latchPin, OUTPUT);
	pinMode(clockPin, OUTPUT);
	pinMode(dataPin, OUTPUT);
}
void characterLib::trueWrite(uint8_t *info, int Segment)
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, info);
  shiftOut(dataPin, clockPin, MSBFIRST, segment[Segment-1]);
  digitalWrite(latchPin, HIGH);
}
void characterLib::writeToDisplay(uint8_t *textToShow,int size)
{
   for (int q = 0; q < (size); q++) {
      trueWrite(textToShow[q], q+1);
   } 
}
