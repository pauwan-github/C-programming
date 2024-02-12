#include<stdio.h>
int main()
{
	int number, total=0;
	printf("\n please enter nay value below 10\n");
	scanf("%d", &number);
	while(number<=10)
	{
		total=total+number;
		number++;
		
	}
	printf("\n value of total from the while loop is: %d", total);
	return(0);
}