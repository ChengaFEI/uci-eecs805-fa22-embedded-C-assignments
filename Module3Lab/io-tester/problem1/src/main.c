// UCI DCE 22 Fall
//
// EECS_805: C Programming for Embedded System
// Module 3 Lab
// Problem 1
//
// Cheng Fei

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Macro variables settings.
#define LF 10
#define CR 13
#define MAX_STRING_NUMBER 100
#define MAX_CHARACTER_NUMBER 100

/*************************/
/* Main Function         */
/*************************/
// Prompt the user to enter strings and output the largest string the user enters.
int main(void) {
  // Basic variables settings.
  char strings[MAX_STRING_NUMBER][MAX_CHARACTER_NUMBER] = {0}; // Default maximum length of a single string is 100 characters.
  int stringIndex = 0; // Record the index of the accumulative longest string.
  int longestLength = 0; // Record the accumulative largest length of strings.
  int stringi = 0; // Index of the current string.

  // Ouput the prompt.
  printf("Please input the strings: \n");
  printf("****************************************************\n");
  printf("*** Separate sentences with the return keystroke ***\n");
  printf("*** End by entering X                            ***\n");
  printf("****************************************************\n");

  // Read from the input device.
  do {
    // Read strings separated by whitespace/newline/tab.
    scanf("%s", strings[stringi]);
    stringi++;
  } while (strings[stringi-1][0] != 'X'); // Terminate when entering 'X'.

  // Retrieve the longest string.
  for (int i = 0; i <= stringi; i++) {
    if (strlen(strings[i]) > longestLength) {
      longestLength = strlen(strings[i]);
      stringIndex = i;
    }
  }
  
  // Output the longest string.
  printf("The longest string you entered is: \n");
  printf("%s\n", strings[stringIndex]);

  return EXIT_SUCCESS;
}