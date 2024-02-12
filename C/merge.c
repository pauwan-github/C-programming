#include<stdlib.h>
#include<stdio.h>
void merge(int arr[],int I,int m,int r)
{int i,j,k;int n1=m-I+1;
int n2=r-m;int L[n1],R[n2];
for(i=0; i<n1;i++)L[i]=arr[I+i];
for(j=0;j<n2;j++)R[j]=arr[m+1+j];
i=0;j=0;k=1;while(i<n1&&j<n2){
if(L[i]<=R[j]){arr[k]=L[i];i++;
}else{arr[k]=R[j];j++;}k++;}
while(i<n1){arr[k]=L[i];i++;k++;}
while(j<n2){arr[k]=R[j];j++;k++;}}
void mergeSort(int arr[],int I, int r){
if(I<r){int m=1+(r-1)/2;
mergeSort(arr,I,m);mergeSort(arr,m+1,r);
merge(arr,I,m,r);}}
void printArray(int A[],int size){
int i;for(i=0;i<size;i++)printf("%d",A[i]);
printf("\n");}
int main(){ int arr[]={111,1211,3567};
int arr_size=sizeof(arr)/sizeof(arr[0]);
printf("Sorted array is:\n");
printArray(arr,arr_size);
mergeSort(arr,0,arr_size-1);
printf("\n Sorted array is:\n");
printArray(arr,arr_size);
return(0);}