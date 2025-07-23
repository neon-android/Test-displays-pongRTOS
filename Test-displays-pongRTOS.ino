/*Programa para probar los punks displays de el pong RTOS
se usan dos displays independientes con declaraciones para cada uno \

*/

#include <ShiftRegister74HC595.h>
#include <variables.h>
#include <funcionesDisplay.h>


void setup() {
}

void loop() {
  for (int i = 0; i < 10; i++) {
    showNumber(i);
    showNumber1(i);
    delay(500);
  }
}
