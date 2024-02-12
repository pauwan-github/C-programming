#include<stdio.h>
#include<conio.h> 

int main() {
   int length, breadth, area;

   printf("\n enter the length : ");
   scanf("%d", &length);

   printf("\n enter the breadth  : ");
   scanf("%d", &breadth);

   area = length * breadth;
   printf("\nArea of Rectangle  %d", area);

   return (0);
}