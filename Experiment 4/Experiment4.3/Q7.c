/*4.3.7*/ 
#include <stdio.h> 
int main() { 
 printf("Name:Siya\nSAP ID:590028348\nCourse:BSc Cse\nbatch:b1"); 
 printf("\n------------------------\n"); 
int i, j, s; 
int n = 5; 
  for (i = n; i >= 1; i--) { 
  for (s = n; s > i; s--) { 
 printf(" "); 
} 
for (j = 1; j <= i; j++) { 
  printf("%d", j); 
} 
  printf("\n"); 
} 
return 0; 
} 
