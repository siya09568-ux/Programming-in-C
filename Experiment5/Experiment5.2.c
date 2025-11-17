/*5.2. Declare a local variable inside a function and try to access it outside the 
function. Compare this with accessing the global variable from within the function. 
*/ 
#include <stdio.h> 
int globalVar = 10; 
void showVariables() { 
int localVar = 5; 
  printf("Inside showVariables(): localVar = %d\n", localVar); 
  printf("Inside showVariables(): globalVar = %d\n", globalVar); 
} 
int main() { 
  printf("Name:Siya\nSap ID:590028348\nCourse:Bsc CS\nBatch:1st"); 
  printf("\n-----------------------------------\n"); 
  printf("Inside main(): globalVar = %d\n", globalVar); 
showVariables(); 
return 0; 
} 
