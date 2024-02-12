#include<stdio.h>
int stack[5],i,choice=0,n,top=-1;
void push(); void pop(); void show(); void main()
{printf("Enter the number of elements in the stack");
scanf("%d",&n);while(choice!=4)
{printf("Choose one option below:\n");
printf("\n1.Push\n2.Pop\n3.Show\n4.Exit\n");
printf("Enter your choice:\n");scanf("%d",&choice);
switch(choice){ case1:{push();break;}case2:{pop();break;}
case3:{show();break;}case4:{printf("Exit");break;}
default:{printf("\nEnter valid choice");break;}};}}
void push(){int val;if (top==n)printf("\nOverflow");else{
printf("Enter the value");scanf("%d",&val);top=top+1;
stack[top]=val;}}void pop(){if(top==-1)printf("Underflow");
else {top=top-1;}}void show(){for(i=top;i>=0;i--)
{printf("%d\n",stack[i]);}if(top==-1){printf("Empty Stack");}}