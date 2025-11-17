/*6.1. WAP to read a list of integers and store it in a single dimensional array.  
Write a C program to print the second largest integer in a list of integers.*/ 
#include <stdio.h> 
#include <limits.h> 
int main() { 
    printf("Name:Siya\nSap ID:590028348\nCourse:Bsc CS\nBatch:1st"); 
    printf("\n-----------------------------------\n"); 
  int n, i; 
   int largest = INT_MIN, second_largest = INT_MIN; 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
  int arr[n]; 
    printf("Enter %d integers:\n", n); 
    for(i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
        // Update largest and second largest 
        if(arr[i] > largest) { 
            second_largest = largest; 
            largest = arr[i]; 
        } else if(arr[i] > second_largest && arr[i] != largest) {
                       second_largest = arr[i]; 
        } 
    } 
    if(second_largest == INT_MIN) { 
        printf("There is no second largest element.\n"); 
    } else { 
        printf("The second largest number is: %d\n", second_largest); 
} 
return 0; 
} 
