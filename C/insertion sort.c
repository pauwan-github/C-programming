#include<math.h>
#include<stdio.h>
void insert(int array[], int n)
{int i, element, j;
for (i=1;i<n;i++)
{element=array[i];j=i-1;
 while(j>=0 &&element<=array[j]){
array[j+1]=array[j];
j=j-1;}
array[j+1]=element;}}
void printArray(int array[], int n)
{int i;
for(i=0;i<n;i++)
printf("%d",array[i]);}
int main(){
	int array[]={12,31,25,8,32,17};
	int n=sizeof(array)/sizeof(array[0]);
	printf("Elements before sorting are:\n");
	printArray(array,n); 
	insert(array,n);
	printf("\nElements after sorting are:\n");
	printArray(array,n);return (0);
}