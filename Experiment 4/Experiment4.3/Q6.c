/*4.3.6 Write a C programe to print following pattern : 
54321   
4321   
321   
21   
1 */ 
#include<stdio.h> 
int main() { 
 printf("Name - Siya\nSAP ID - 590028348\nCourse-BscComputerScience\nBatch-B1"); 
 printf("\n---------------------------------------------------------\n"); 
int i, j; 
  for (i = 5; i >= 1; i--) { 
  for (j = i; j >= 1; j--) { 
  printf("%d", j); 
} 
 printf("\n"); 
}
  return 0;
} 
