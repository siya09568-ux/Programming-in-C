/*5.4. Declare a static local variable inside a function. Observe how its value persists 
across function calls.*/ 
#include <stdio.h> 
void counter() { 
  static int count = 0; 
  count++; 
  printf("count = %d\n", count); 
} 
int main() { 
  printf("Name:Siya\nSap ID:590028348\nCourse:Bsc CS\nBatch:1st"); 
  printf("\n-----------------------------------\n");
  
counter(); 
counter(); 
counter(); 
return 0; 
} 
