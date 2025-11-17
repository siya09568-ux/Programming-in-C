/*4.1. WAP to enter numbers till the user wants. At the end, it should 
display the count of positive, negative, and Zeroes entered.*/ 
#include <stdio.h> 
int main() { 
    printf("Name:Siya\nSap:ID590028348\nCourse:Bsc CS\nBatch:1st"); 
    printf("\n-----------------------------------\n"); 
int n , cp=0,cn=0,zero=0; 
char ch; 
do 
{ 
 printf("Enter the number"); 
 scanf("%d",&n); 
 if (n>0) 
 { 
  cp++; 
 } 
 else if (n<0) 
 { 
  cn++; 
 } 
 else 
 { 
  zero++; 
 } 
  printf("Do you want to enter another number y/Y or n/N: "); 
  scanf(" %c", &ch);  
}while (ch=='y'||ch=='Y'); 
        
 printf("\nPositive counts are %d",cp); 
 printf("\nNegative counts are %d",cn); 
 printf("\nzero counts are %d",zero);
return 0; 
} 
