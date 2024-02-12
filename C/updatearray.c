#include<stdio.h>
int main(){
int i, size, x, pos;
int a[]={1,3,5,7,9};
size=sizeof(a[0]);
printf("The array elemente before update:");
for(i=0; i<size;i++)
printf("\na[%d]=%d", i, a[i]);
printf("\n The position To Update:");
scanf("%d", &pos);
printf("The updated elements are:");
for(i=0; i<size; i++)
printf("\na[%d]=%d", i, a[i]);
return(0);
}