#include <stdio.h>
 
int main() {
 
   int rad;
   float Pi = 3.14, area, ci;
 
   printf("Enter radius of circle:\n ");
   scanf("%d", &rad);
 
   area = Pi * rad * rad;
   printf("Area of circle : %f \n", area);
 
   ci = 2 * Pi * rad;
   printf("Circumference : %f \n", ci);
 
   return (0);
}
