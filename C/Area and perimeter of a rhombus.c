#include<stdio.h>
float areaperimeter_rhombus(int length, int diagonal1, int diagonal2);
int main()
{
    float length, diagonal1, diagonal2, area, perimeter;
    printf("enter the value of length: ");
    scanf("%f" ,&length);
	perimeter=length*4;
    printf("perimeter=%f\n",perimeter);
    printf("enter the value of diagonal1\n diagonal2");
    scanf("%f %f", &diagonal1, &diagonal2);
    area=(diagonal1*diagonal2)/2;
    printf("area=%f\n" ,area);
    return(0);
}
float areaperimeter_rhombus(int length, int diagonal1, int diagonal2)
{
	int result;
	result=length*4;
	result=(diagonal1*diagonal2)/2;
	return result;
}