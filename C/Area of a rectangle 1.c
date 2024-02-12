#include<stdio.h>
#include<conio.h> 

int main() {
   int length, breadth, area;

   printf("\n5 : ");
   scanf("%d", &length);

   printf("\n2 : ");
   scanf("%d", &breadth);

   area = length * breadth;
   printf("\nArea of Rectangle  %d", area);

   return (0);
}