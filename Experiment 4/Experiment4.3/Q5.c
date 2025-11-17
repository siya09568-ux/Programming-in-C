/*4.3.5 Write a C programe to print following pattern : 
     1  
    12  
   123 
  1234 
 12345 
*/ 
#include<stdio.h> 
int main() { 
 printf("Name - Siya\nSAP ID - 590028348\nCourse-BscComputerScience\nBatch-B1"); 
 printf("\n---------------------------------------------------------\n"); 
    int n; 
    printf("Enter the number of rows: "); 
    scanf("%d", &n); 
 int i, j, s; 
  for (i = 1; i <= n; i++) { 
        // Print spaces first 
        for (s = i; s < n; s++) { 
            printf(" "); 
        } 
        // Print numbers 
        for (j = 1; j <= i; j++) { 
            printf("%d", j); 
        } 
        printf("\n"); 
    } 
        return 0; 
} 
