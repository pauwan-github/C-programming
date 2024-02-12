#include<stdio.h>
int main()
{
	char operator;
	int number1,number2;
	printf("please select any ARITHMETIC OPERATOR You wish!\n");
	scanf("%c",&operator);
	printf("\nPlease Enter two values to perform Arithmetic Operations\n");
	scanf("%d %d",&number1,&number2);
	switch(operator){
	
	case'+':
		printf("Addition of two numbers is: %d", number1+number2);
		break;
	case'-':
		printf("Subtraction between two numbers is: %d", number1-number2);
		break;
	case'*':
		printf("Multiplication of two numbers is: %d", number1*number2);
		break;
	case'/':
		printf("Division of two numbers is: %d", number1/number2);
		break;
	case'%':
		printf("Module of two numbers is: %d", number1%number2);
		break;
	default:
		printf("You have entered Wrong operator\n");
		printf("Please enter the correct operator such as +, -, *, /, %%");
		break;
}}