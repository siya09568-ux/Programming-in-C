/*2. WAP to check if the triangle is valid or not. If the validity is 
established, do check if the triangle is isosceles, equilateral, right 
angle, or scalene. Take sides of the triangle as input from a user.*/ 
  
#include <stdio.h> 
int main() { 
  printf("Name -Siya\nSAP ID - 590028348\n Course BscComputerScience\nBatch
  B1"); 
  printf("\n---------------------------------------------------------\n"); 
int a, b, c; 
  printf("Enter side 1: "); 
  scanf("%d", &a);
  
  printf("Enter side 2: "); 
  scanf("%d", &b); 

  printf("Enter side 3: "); 
  scanf("%d", &c); 

  If (a + b > c && a + c > b && b + c > a) { 
    printf("Triangle is valid\n"); 
  if (a == b && b == c) { 
    printf("Triangle is Equilateral\n"); 
} else if (a == b || b == c || a == c) { 
    printf("Triangle is Isosceles\n"); 
} else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) { 
    printf("Triangle is Right Angled\n"); 
} else { 
    printf("Triangle is Scalene\n"); 
}  
}else { 
    printf("Triangle is not valid\n"); 
} 
return 0;
}
