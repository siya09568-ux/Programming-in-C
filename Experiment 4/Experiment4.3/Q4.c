/*4.3.4 Write a C programe to print following pattern : 
1 
21 
321 
4321 
54321*/ 
#include<stdio.h> 
int main() { 
 printf("Name - Siya\nSAP ID - 590028348\nCourse-BscComputerScience\nBatch-B1"); 
 printf("\n---------------------------------------------------------\n"); 
int n; // n = no.of rows 
 printf("Enter the number of rows :"); 
 scanf("%d", &n); 
int i,j; 
  for(i=1;i<=n;i++){ 
  for(j=i;j>=1;j--) { 
} 
 printf("%d", j); 
 printf("\n"); 
} 
return 0; 
} 
