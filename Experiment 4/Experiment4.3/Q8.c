/*4.3.8*/ 
#include <stdio.h> 
int main() { 
 printf("Name:Siya\nSAP ID:590028348\nCourse:BSc Cse\nbatch:b1"); 
 printf("\n------------------------\n"); 
    int i, j, n = 5; 
    for (i = n; i >= 1; i--) { 
        for (j = 1; j < i; j++) { 
            printf("  "); 
        } 
        for (j = n; j >= i; j--) { 
            printf("%d ", j); 
        } 
        for (j = i + 1; j <= n; j++) { 
            printf("%d ", j); 
        } 
        printf("\n"); 
    } 
    for (i = 2; i <= n; i++) { 
        for (j = 1; j < i; j++) { 
            printf("  "); 
        } 
        for (j = n; j >= i; j--) { 
            printf("%d ", j); 
        } 
        for (j = i + 1; j <= n; j++) { 
printf("%d ", j); 
} 
printf("\n"); 
} 
return 0; 
} 
