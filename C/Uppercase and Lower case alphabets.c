#include<stdio.h>
float alphabet(int alphabet);
int main()
{
	char alphabet;
	
	printf("enter any alphabet: ");
	scanf("%c", &alphabet);
	
	if(alphabet>='a' &&alphabet<='z')
{
	printf("alphabet is in lowercase");
	}
	
	else if
	
    (alphabet>='A' &&alphabet<='Z')
    printf("alphabet is in uppercase");
    
    else
    
	{
    printf("it is not an alphabet");
	}
	return(0);
}