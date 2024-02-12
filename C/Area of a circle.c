#include<stdio.h>
#include<conio.h>

int main()
{
    int pie, radius, area;
    printf("\n enter value of pie : ");
    scanf("%d", &pie);

    printf("\n enter value of radius : ");
    scanf("%d", &radius);

    area=(pie * radius * radius);
    printf("\nArea of a circle %d" ,area);

    return (0);
}