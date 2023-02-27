// 
// UCI DCE 22 Fall
//
// EECS_805: C Programming for Embedded System
// Module 4 Lab
//
// Cheng Fei
// 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void squeeze(char [], char []);

int main(void) {
  char s1[] = "Hello World!";
  char s2[] = "We have a bell!";
  printf("String 1 is: %s\n", s1);
  printf("String 2 is: %s\n\n", s2);
  printf("After squeeze:\n");
  squeeze(s1, s2);
  printf("String 1 is: %s\n", s1);
  printf("String 2 is: %s\n", s2);
}

void squeeze(char s1[], char s2[]) {
  int size1 = strlen(s1);
  int size2 = strlen(s2);
  for (int i = 0; i < size1; i++) {
    for (int j = 0; j < size2; j++) {
      if (s1[i] == s2[j]) {
        for (int k = i; k < size1; k++) {
          s1[k] = s1[k+1];
        }
        size1--;
        i--;
        break;
      }
    }
  }
}