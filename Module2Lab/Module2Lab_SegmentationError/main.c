// UCI DCE 22 Fall
//
// EECS_805: C Programming for Embedded System
// Module 1 Lab
//
// Cheng Fei

#include <stdio.h>

// #define REGA *((volatile unsigned char *)0x417164)

void polling(char);

int main(void) {
  // signed char variable to fetch temperature value form Register portA.
  char temperature;
  // Assign a value to the variable stored at the address 0x417164.
  // Values 0x00 to 0x7F are for temperatures above freezing,
  // 0x80 to 0xFF for below freezing, in Centigrade.
  // REGA = 0xFF;
  // Fetch the temperature value from Register portA.
  temperature = 0xFF;
  polling(temperature);
  return 0;
}

// Polling routine to display the temperature value and alert "Freezing" when it's below 0.
void polling(char temperature) {
  printf("Current temperature: %d\n", temperature);
  if (0 > temperature) printf("Freezing\n");
}