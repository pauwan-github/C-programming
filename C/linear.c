#include<stdio.h>
int  linearSearch(int a[],int n, int val){
for (int i=0; i<n; i++)	
{if(a[i]==val)
return i+1;
}return -1;} int main(){
int a[]={100, 10, -9, 9, 30, -5, 37, 21, 89};
int val=-5; int n=sizeof(a)/sizeof(a[0]);
int res=linearSearch(a,n,val);
printf("The array elements are:");
for(int i=0; i<n; i++)
printf("%d", a[i]);
printf("\nElement to be searched is %d", val);
if (res==-1){
printf("\nElement not present in the array");}
else printf("\nElement is at %d position af array",res);
return(0);
}