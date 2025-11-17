/*5.1. Declare a global variable outside all functions and use it inside various 
functions to understand its accessibility.*/ 
#include <stdio.h> 
int counter = 0; 
 void increaseCounter() { 
 counter = counter + 1; 
  printf("Counter in increaseCounter: %d\n", counter); 
} 
 void doubleCounter() { 
 counter = counter * 2; 
  printf("Counter in doubleCounter: %d\n", counter); 
} 
int main() { 
 printf("Name:Siya\nSap ID:590028348\nCourse:Bsc CS\nBatch:1st"); 
 printf("\n-----------------------------------\n"); 
 printf("Initial counter: %d\n", counter); 
  increaseCounter(); 
  doubleCounter(); 
   printf("Final counter in main: %d\n", counter); 
return 0; 
} 
