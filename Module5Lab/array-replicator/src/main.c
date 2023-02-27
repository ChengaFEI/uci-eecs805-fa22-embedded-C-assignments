// 
// UCI DCE 22 Fall
//
// EECS_805: C Programming for Embedded System
// Module 5 Lab
//
// Cheng Fei
// 

#include <stdlib.h>
#include <stdio.h>

#define MAX 10

// Function Prototypes.
void init_array(int[], int);
void copy_array(int[], int[]);

int main(void) {
  int array1[MAX];
  int array2[MAX];
  
  init_array(array1, 0xFE);
  printf("Elements in array1 are: \n");
  for (int i = 0; i < MAX; i++) {
    printf("%d ", array1[i]);
  }
  printf("\n------------------------------------------------\n");
  printf("Copying...");
  printf("\n------------------------------------------------\n");
  copy_array(array1, array2);
  printf("Elements in array2 are: \n");
  for (int i = 0; i < MAX; i++) {
    printf("%d ", array2[i]);
  }
  printf("\n------------------------------------------------\n");

  return EXIT_SUCCESS;
}

// Initialize all elements in array1 with value.
void init_array(int array1[], int value) {
  for (int i = 0; i < MAX; i++) {
    array1[i] = value;
  }
}

// Copy all elements from array1 to array2.
void copy_array(int array1[], int array2[]) {
  for (int i = 0; i < MAX; i++) {
    array2[i] = array1[i];
  } 
}