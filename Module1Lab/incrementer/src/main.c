// UCI DCE 22 Fall
// 
// EECS_805: C Programming for Embedded System
// Module 1 Lab
//
// Cheng Fei

#include <stdio.h>

int main(void) {
  int i = 0, j = 0;
  j = i++? i++ : ++i;
  printf("j = %d\n", j);
  j = i++ ? i++, ++j : ++j, i++;
  printf("j = %d\n", j);

  return 0;
}