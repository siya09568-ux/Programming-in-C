/*Experiment 2: Operators 
3.Write a program to calculate Compound Interest.*/ 
#include<stdio.h> 
#include<math.h> 
int main() 
{ 
printf("Name - Siya\nSAP ID - 590028348\nCourse
BscComputerScience\nBatch-B1"); 
printf("\n---------------------------------------------------------\n"); 
f
 loat principal, rate, time, n, amount, ci; 
printf("Enter the principal amount: "); 
scanf("%f", &principal); 
printf("Enter the annual interest rate (in percentage): "); 
scanf("%f", &rate); 
printf("Enter the time period (in years): "); 
scanf("%f", &time); 
printf("Enter the number of times interest is compounded per year: "); 
scanf("%f", &n); 
amount = principal * pow((1 + (rate / (100 * n))), n * time); 
ci = amount - principal; 
printf("Compound Interest = %.2f\n", ci); 
printf("Total Amount = %.2f\n", amount);
return 0; 
)
