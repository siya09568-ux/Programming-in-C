/*4. WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear 
or not.*/

#include <stdio.h> 
int main() { 
  printf("Name:Siya\nSAP ID:590028348\nCourse:BSc CSE\nBatch:B1"); 
  printf("\n------------------------------------------------\n"); 
  
float x1, y1, x2, y2, x3, y3; 
  printf("Enter coordinates of point 1 (x1 y1): "); 
  scanf("%f %f", &x1, &y1); 
  
  printf("Enter coordinates of point 2 (x2 y2): "); 
  scanf("%f %f", &x2, &y2); 

  printf("Enter coordinates of point 3 (x3 y3): "); 
  scanf("%f %f", &x3, &y3); 
  
if ((y2 - y1)*(x3 - x2) == (y3 - y2)*(x2 - x1)) { 
  printf("The points are collinear.\n"); 
} else { 
  printf("The points are not collinear.\n"); 
} 
return 0;
}
