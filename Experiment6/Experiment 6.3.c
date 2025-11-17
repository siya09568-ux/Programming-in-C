/*6.3. WAP to read a list of integers and store it in a single dimensional array.  
Write a C program to find the frequency of a particular number in a list of integers.*/ 
#include <stdio.h> 
int main() { 
    printf("Name:Siya\nSap ID:590028348\nCourse:Bsc CS\nBatch:1st"); 
    printf("\n-----------------------------------\n"); 
 int n, i, search, count = 0; 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
  int arr[n]; 
     printf("Enter %d integers:\n", n); 
   for(i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
        printf("Enter the number to find its frequency: "); 
       scanf("%d", &search); 
    for(i = 0; i < n; i++) { 
        if(arr[i] == search) 
            count++; 
    } 
 
    printf("Frequency of %d is: %d\n", search, count);
   return 0; 
} 
