#include<stdio.h>
#define pie 3.142
float areperimeter_circle(int r);
int main()
{
    float r, area, perimeter;

    printf("enter the value of r");
    scanf("%f" ,&area,&perimeter);

    area=(pie*r*r);
    perimeter=(2*pie*r);

    printf("area=%f\n",area);
    printf("perimeter=%f\n" ,perimeter);
    
    return(0);
}