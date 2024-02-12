#include <stdio.h>
int main()
{
	 int salary; //to store salary
	float tax; //to store tax
	
	//input salary
	printf("Enter yearly salary: ");
	scanf("%d",&salary);
	
	//tax calculations
	if(salary<=400000)
		tax = salary*1/100;
	else if(salary>400000 && salary<=1000000){
		tax = 400000*1/100;
		tax = tax + (salary-400000)*15/100;
	}
	else{
		tax = 400000*1/100;
		tax = tax + (600000)*15/100;
		tax = tax + (salary-1000000)*25/100;		
	}
	
	printf("Salary: %d\n",salary);
	printf("Tax: %f\n",tax);
	
	
	return 0;	}