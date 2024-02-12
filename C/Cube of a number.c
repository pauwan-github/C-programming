#include<stdio.h>

int main()
{
int sq,number;
while(1)
{
printf("Enter Any number: ");
scanf("%d", number);
if(number%2==0 && number%3==0)
{
break;
}
else if(number!=0)
{
cube=number*number*number;
printf("Cube of number is”);
}
}
return(0);
}