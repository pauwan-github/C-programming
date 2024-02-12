#include<stdio.h>
int main(){
int arr[5]={21,20,34,45,2};
int size=sizeof(arr[5]);int key, found=0;
printf("Enter element to search;");
scanf("%d", &key);for(int i=0; i<size; i++){
if(arr[i==key]){found=1;
printf("%d found at index %d\n",key,i);
break;}}if(!found){
printf("%d not found\n",key);
}return(0);}