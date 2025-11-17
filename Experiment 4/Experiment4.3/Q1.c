/*4.3.1 Write a C programme to print following pattern : 
1 
22 
333 
4444 
55555 */ 
#include<stdio.h> 
int main() { 
 printf("Name - Siya\nSAP ID - 590028348\nCourse-BscComputerScience\nBatch-B1"); 
 printf("\n---------------------------------------------------------\n"); 
int n; // n = no.of rows 
 printf("Enter the number of rows :"); 
 scanf("%d", &n); 
int i,j; 
 for(i=1;i<=n;i++){ 
 for(j=1;j<=i;j++) { 
} 
 printf("%d", i); 
 printf("\n"); 
} 
return 0; 
}  
