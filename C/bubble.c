#include<stdio.h>
int main(){
int arr[5], num, i, j, swap;
printf("Enter the number of elements:\n");
scanf("%d", &num);
printf("Entered %d numbers:\n", num);
for(i=0;i<num;i++)
scanf("%d", &arr[i]);
for(i=0; i<num-1; i++){
for(j=0;j<num-i-1; j++){
if (arr[j]>arr[j+1]){
swap=arr[j];
arr[j]=arr[j+1];
arr[j+1]=swap;}}}
printf("Sorted Array:\n");
for(i=0;i<num;i++)
printf("%d\n", arr[i]);
return (0);}