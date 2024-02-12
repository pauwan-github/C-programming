#include<stdio.h>
int main(){
int arr[10]={10,20,30,40,50};
int n=5; int element=25; int i; int pos=3;
printf("Original Array:\n");
for(int i=0; i<n; i++){
printf("%d", arr[i]);
}
for(int i=n-1; i>=pos; i--){
arr[i+1]= arr[i];}
arr[pos]=element;n++;
printf("\nNew Array:\n");

for(int i=0; i<n; i++);{
printf("%d", arr[i]);
}
return(0);
}