#include<stdio.h>
int main(){
int arr[5] = {1, 22, 123, 14, 55,};
int n = 5; int pos; int i;
printf("Enter the position of the element to be deleted:");
scanf("%d", &pos);
if (pos < 1 || pos >n){
printf("Invalid position");
}else{
for(i = pos - 1; i < n - 1; i++){
arr[i] = arr[i + 1];
}n--;
printf("Array after deletion:\n");
for(i = 0; i < n; i++){
printf("%d",arr[i]);
}
}return(0);
}
