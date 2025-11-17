/*4.3.3 Write a C programme to print following pattern : 
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 */ 
#include<stdio.h> 
int main() { 
 printf("Name - Siya\nSAP ID - 590028348\nCourse-BscComputerScience\nBatch-B1"); 
 printf("\n---------------------------------------------------------\n"); 
int n; // n = no.of rows 
 printf("Enter the number of rows :"); 
 scanf("%d", &n); 
int i,j,count=1; 
 for(i=1;i<=n;i++){ 
 for(j=1;j<=i;j++) { 
 printf("%d", count); 
  count++; 
} 
 printf("\n"); 
} 
return 0; 
} 
