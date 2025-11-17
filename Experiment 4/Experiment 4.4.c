/*4.4. The population of a town is 100000. The population has increased steadily at 
the rate of 10% per year for the last 10 years.Write a program to determine the 
population at the end of each year in the last decade.*/ 
#include <stdio.h> 
#include <math.h> 
int main() { 
  printf("Name:Siya\nSap:ID590028348\nCourse:Bsc CS\nBatch:1st"); 
  printf("\n-----------------------------------\n"); 
int year; 
 float initial_population = 100000; 
 float rate = 0.10; 
printf("Year\tPopulation\n"); 
for (year = 1; year <= 10; year++) { 
 float population = initial_population * powf(1 + rate, year); // used the same formula as used in compound interest 
printf("%d\t%f\n", year, population); 
}
  return 0; 
} 
