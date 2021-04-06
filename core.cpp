#include "LedControl.h"
LedControl lc = LedControl(12, 10, 11, 1);
unsigned long delaytime1 = 100;
unsigned long delaytime2 = 50;
void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 2);
  lc.clearDisplay(0);
}
byte j = 0;
void loop() {

  j = 0;
  byte a[5] = {B11111110, B10010010, B10010010, B10010010, B01101110};
  byte r[5] = {B00111110, B00010000, B00100000, B00100000, B00010000};
  byte d[5] = {B00011100, B00101010, B00101010, B00101010, B00011010};
  byte u[5] = {B00111110, B00010000, B00100000, B00100000, B00011110};
  byte i[5] = {B00011100, B00100010, B00100010, B00010010, B11111110};
  byte n[5] = {B00011100, B00100010, B00100010, B00100100, B00011110};
  byte o[5] = {B00111110, B00010000, B00100000, B00100000, B00011110};
  while (j != 55) {
  if (j == 55) {
    j = 0;
  }
  else {
   j = j + 1;
  }

  lc.clearDisplay(0);
  lc.setRow(0, j, a[0]);
  lc.setRow(0, j - 1, a[1]);
  lc.setRow(0, j - 2, a[2]);
  lc.setRow(0, j - 3, a[3]);
  lc.setRow(0, j - 4, a[4]);
  lc.setRow(0, j - 7, r[0]);
  lc.setRow(0, j - 8, r[1]);
  lc.setRow(0, j - 9, r[2]);
  lc.setRow(0, j - 10, r[3]);
  lc.setRow(0, j - 11, r[4]);
  lc.setRow(0, j - 14, d[0]);
  lc.setRow(0, j - 15, d[1]);
  lc.setRow(0, j - 16, d[2]);
  lc.setRow(0, j - 17, d[3]);
  lc.setRow(0, j - 18, d[4]);
  lc.setRow(0, j - 21, u[0]);
  lc.setRow(0, j - 22, u[1]);
  lc.setRow(0, j - 23, u[2]);
  lc.setRow(0, j - 24, u[3]);
  lc.setRow(0, j - 25, u[4]);
  lc.setRow(0, j - 28, i[0]);
  lc.setRow(0, j - 29, i[1]);
  lc.setRow(0, j - 30, i[2]);
  lc.setRow(0, j - 31, i[3]);
  lc.setRow(0, j - 32, i[4]);
  lc.setRow(0, j - 35, n[0]);
  lc.setRow(0, j - 36, n[1]);
  lc.setRow(0, j - 37, n[2]);
  lc.setRow(0, j - 38, n[3]);
  lc.setRow(0, j - 39, n[4]);
  lc.setRow(0, j - 42, o[0]);
  lc.setRow(0, j - 43, o[1]);
  lc.setRow(0, j - 44, o[2]);
  lc.setRow(0, j - 45, o[3]);
  lc.setRow(0, j - 46, o[4]);
  delay(delaytime1);
}
}
