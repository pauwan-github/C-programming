#include<stdio.h>
int main()
{
	int a, b, h;
	float area_trapezium;
	printf("enter a");
	scanf("%d", &a);
	printf("enter b");
	scanf("%d", &b);
	printf("enter h");
	scanf("%d", &h);
	area_trapezium=((a+b)*h)/2;
	printf("area of a trapezium=%f",area_trapezium);
	return(0);
}