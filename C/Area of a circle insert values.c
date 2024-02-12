#include<stdio.h>
#define pie 3.142

float areaperimeter_circle(int r);
int main()
{
    float r, area, perimeter;

    printf("enter the value of r: ");
    scanf("%f" ,&r);

    area=pie*r*r;
    printf("area=%f\n",area);
    
    perimeter=2*pie*r;
    printf("perimeter=%f\n" ,perimeter);
    
    return(0);
}