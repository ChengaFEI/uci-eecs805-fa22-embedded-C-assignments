// 
// UCI DCE 22 Fall
//
// EECS_805: C Programming for Embedded System
// Module 5 Discussion
//
// Cheng Fei
// 

#include <stdlib.h>
#include <stdio.h>

// An 8-bit union object with a 8-bit register data.
// @Fields: reg_val -- continuously store all 8 bits.
// @Fields: reg_bits -- separately store bits in 4 different fields.
typedef union {
    unsigned char reg_val;
    struct {
      unsigned int reg_field1 : 3;
      unsigned int reg_field2 : 2;
      unsigned int reg_field3 : 1; 
      unsigned int reg_field4 : 2;
    } reg_bits;
  } RegisterVal;

int main(void) {
  RegisterVal register_val;
  // Assign bits into fields.
  register_val.reg_bits.reg_field1 = 0x6;
  register_val.reg_bits.reg_field2 = 0x2;
  register_val.reg_bits.reg_field3 = 0x1;
  register_val.reg_bits.reg_field4 = 0x3;
  // Display bits separately.
  printf("The first bit field is 0x0%x (binary format: %d)\n", register_val.reg_bits.reg_field1, register_val.reg_bits.reg_field1);
  printf("The second bit field is 0x0%x (decimal value: %d)\n", register_val.reg_bits.reg_field2, register_val.reg_bits.reg_field2);
  printf("The third bit field is 0x0%x (decimal value: %d)\n", register_val.reg_bits.reg_field3, register_val.reg_bits.reg_field3);
  printf("The fourth bit field is 0x%x (decimal value: %d)\n", register_val.reg_bits.reg_field4, register_val.reg_bits.reg_field4);
  // Display in the 8-bit format.
  printf("Display in the 8-bit format: 0x%x (decimal value: %d)\n", register_val.reg_val, register_val.reg_val);
  return EXIT_SUCCESS;
}