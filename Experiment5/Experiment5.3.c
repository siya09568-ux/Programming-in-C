/*5.3.Declare variables within different code blocks (enclosed by curly braces) and 
test their accessibility within and outside those blocks.*/ 
#include <stdio.h> 
int main() { 
  printf("Name:Siya\nSap ID:590028348\nCourse:Bsc CS\nBatch:1st"); 
  printf("\n-----------------------------------\n"); 
int mainVar = 10; 
  printf("In main block: mainVar = %d\n", mainVar);
{ 
  int block1Var = 20; 
  printf("In first block: mainVar = %d, block1Var = %d\n", mainVar, block1Var); 
}
{
    int block2Var = 30; 
    printf("In second block: mainVar = %d, block2Var = %d\n", mainVar, block2Var);
}
    return 0;
}
