#include<stdio.h>
int main(){
	int arr[10];
	for(int i=0; i<10; i++){
	arr[i]=i+1;
	}printf("Original Array:");
	for(int i=0; i<10; i++){
	printf("%d", arr[i]);}
	printf("\n");
	arr[4]=20;
	printf("Updated Array:");
	for(int i=0; i<10; i++){
	printf("%d", arr[i]);
	}printf("\n");
	return(0);
}
