#include<stdio.h>
#include<stdlib.h>
#define max 3
int stack[max];
int top=-1;
int isfull()
{
 if(top==max-1)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
void push()
{
 int element;
 if(isfull()==1)
 {
  printf("stack overflow");
 }
 else
 {
  printf("enter the element");
  scanf("%d",&element);
  top=top+1;
  stack[top]=element;
 }
}
int isempty()
{
 if(top==-1)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
void pop()
{
 int element=0;
 if(isempty()==1)
 {
  printf("sdtack underflow");
 }
 else
 {
  stack[top]=element;
  top=top-1;
  printf("\n the deleated element is:%d",element);
 }
}
void peek()
{
 printf("element at top is: %d",stack[top]);
}
void display()
{
 printf("stack elements are:");
 for(int i=0;i<=top;i++)
 {
  printf("%d  ",stack[i]);
 }
}
int main()
{
 int choice;
 do
 {
  printf("\nenter your choice:\n1:push\n2:pop\n3:peek\n4:display\n5:quit\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
    push();
    break;
   case 2:
    pop();
    break;
   case 3:
    peek();
    break;
   case 4:
    display();
    break;
   case 5:
    exit(0);
    break;
   default:printf("enter a valid choice");
  }
 }while(choice!=5);
 return 0;
}
   
   
   
