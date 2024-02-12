#include<stdio.h>
int cube_number(int number, int cube);
int main()
{
int	number, cube;
{
	do
	{
		printf("enter any number");
		scanf("%d", &number);
		cube=number*number*number;
        printf("cube=%d", cube); 
    } 
	while(number%2==1);
		printf("stop");
	}
	return (0); 
}