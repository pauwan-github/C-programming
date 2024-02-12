#include<stdio.h>
int cube_number(int number, int cube);
int main()
{
int	number, cube;
{
	do
	{
		printf("enter any number");
		scanf("%d\n", &number);
		cube=number*number*number;
        printf("cube=%.4d", cube); 
    } 
	while(number%2==1);
		printf("stop");
	}
	return 0; 
}