#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && b>c  )
	{
		printf("A is greater");}
		else if ( b>a && c<a )
		{printf("B is greater");
		}
		else if (c>a && b>a )
		{printf("C is greater");
		}
		return 0;
	
}