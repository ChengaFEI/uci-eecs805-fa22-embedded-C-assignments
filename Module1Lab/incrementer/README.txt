*******************************************
UCI Extension 2022Fall

EECS_805: C Programming for Embedded System
Module 1 Lab

Cheng Fei
*******************************************

Prompt:
What will the following expression evaluate?

int main() {  
 int i = 0, j = 0;
 j = i++ ? i++ : ++i;
 j = i++ ? i++, ++j : ++j, i++; 
}