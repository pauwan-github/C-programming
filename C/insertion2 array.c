#include<stdio.h>
int main(){
int students[40],pos, i, size, value;
printf("Enter number of elements:");	
scanf("%d", &size);
printf("Enter %d elements are:",size);
for(i=0; i<size; i++)scanf("%d", &students[i]);
printf("Enter the position of insertion:",pos);
scanf("%d", &pos);
printf("Enter the value to be inserted:",value);
scanf("%d", &value);for(i=size-1; i>=pos-1;i--)
students[i+1]=students[i];students[pos-1]=value;
printf("Final array after insertion:");
for(i=0; i<=size; i++)
printf("%d",students[i]);return(0);}