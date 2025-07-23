///////////////////////////data-clk-latch
ShiftRegister74HC595<1> sr(26, 27, 14);
ShiftRegister74HC595<1> jr(32, 33, 25);

void showNumber(int num) {
  digit1 = num % 10;
  //digit1=(num / 10) % 10 ;
  //Send them to 7 segment displays
  uint8_t numberToPrint[] = { digits[digit1] };
  sr.setAll(numberToPrint);
}

void showNumber1(int num) {
  digit2 = num % 10;
  //digit1=(num / 10) % 10 ;
  //Send them to 7 segment displays
  uint8_t numberToPrint[] = { digits[digit2] };
  jr.setAll(numberToPrint);
}