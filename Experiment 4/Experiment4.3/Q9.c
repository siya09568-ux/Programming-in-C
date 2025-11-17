/*4.3.9*/ 
#include <stdio.h> 
int main() { 
 printf("Name:Siya\nSAP ID:590028348\nCourse:BSc Cse\nbatch:b1"); 
 printf("\n------------------------\n"); 
    int n = 5;   
    int i, j, s; 
    for (i = 1; i <= n; i++) { 
        for (s = i; s < n; s++) { 
            printf("  "); 
        } 
        for (j = 1; j <= i; j++) { 
            printf("%d ", j); 
        } 
        for (j = i - 1; j >= 1; j--) { 
            printf("%d ", j); 
        } 
 printf("\n"); 
    } 
    for (i = n - 1; i >= 1; i--) { 
        for (s = n; s > i; s--) { 
            printf("  "); 
        } 
        for (j = 1; j <= i; j++) { 
            printf("%d ", j); 
        } 
        for (j = i - 1; j >= 1; j--) { 
printf("%d ", j); 
} 
printf("\n"); 
} 
return 0; 
} 
