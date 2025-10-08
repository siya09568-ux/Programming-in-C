/*Experiment 2: Operators 
4.Write a program to find the roots of the 
quadratic equations*/ 
#include <stdio.h> 
#include <math.h> 
int main() { 
printf("Name - Siya\nSAP ID - 590028348\nCourse
BscComputerScience\nBatch-B1"); 
printf("\n---------------------------------------------------------\n"); 
double a, b, c, discriminant, root1, root2, realPart, 
imaginaryPart; 
printf("Enter coefficients a, b, and c for the quadratic 
equation ax^2 + bx + c = 0:\n"); 
printf("a: "); 
scanf("%lf", &a); 
printf("b: "); 
scanf("%lf", &b); 
printf("c: "); 
scanf("%lf", &c); 
discriminant = b * b - 4 * a * c; 
if (discriminant > 0) { 
root1 = (-b + sqrt(discriminant)) / (2 * a); 
root2 = (-b - sqrt(discriminant)) / (2 * a); 
printf("Roots are real and distinct.\n");
printf("Root 1 = %.2lf\n", root1); 
printf("Root 2 = %.2lf\n", root2); 
} else if (discriminant == 0) { 
root1 = root2 = -b / (2 * a); 
printf("Roots are real and equal.\n"); 
printf("Root 1 = Root 2 = %.2lf\n", root1); 
} else { 
realPart = -b / (2 * a); 
imaginaryPart = sqrt(-discriminant) / (2 * a); 
printf("Roots are complex and distinct.\n"); 
printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart); 
printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart); 
} 
system("pause"); 
return 0;
}
