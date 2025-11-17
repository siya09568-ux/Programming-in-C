/*4.5. Ramanujan Number is the smallest number that can be expressed as the sum 
of two cubes in two different ways. WAP to print all such numbers up to a 
reasonable limit.Example of Ramanujan number: 1729 
12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)*/ 
#include <stdio.h> 
int main() { 
    printf("Name:Siya\nSap:ID590028348\nCourse:Bsc CS\nBatch:1st"); 
    printf("\n-----------------------------------\n"); 
 int x, y, z, a; 
 int limit = 20; 
    printf("Ramanujan numbers up to cube of %d:\n", limit); 
        for (x = 1; x <= limit; x++) { 
        for (y = x + 1; y <= limit; y++) { 
     int sum1 = x*x*x + y*y*y; 
            for (z = x + 1; z <= limit; z++) { 
            for (a = z + 1; a <= limit; a++) {                   
  int sum2 = z*z*z + a*a*a; 
                    if (sum1 == sum2 && (x != z || y != a)) { 
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, x, y, z, a); 
                    } 
                } 
            } 
        } 
    } 
 
    return 0; 
} 
