/*Experiment 1: Installation, Environment Setup and starting with C 
language 
4.Write a C program to perform four arithmetic operations on two variables*/ 
#include <stdio.h> 
int main() 
{ 
int a,b; 
int sum,diff,prod; 
f
 loat div;  
printf("Name - Siya\nSAP ID - 590028348\nCourse
BscComputerScience\nBatch-B1"); 
printf("\n---------------------------------------------------------\n"); 
printf("enter the first number."); 
scanf("%d",&a);  
printf("enter the second number."); 
scanf("%d",&b);  
sum = a+b; 
diff = a-b; 
prod = a*b; 
div = (float)a/b; //typecasting to get decimal value 
printf("Addition = %d\n",sum); 
printf("Substraction =%d\n",diff); 
printf("Multiplication = %d\n", prod); 
printf("Division = %.2f\n", div);   
return 0; 
}
