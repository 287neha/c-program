#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int r=-1;
int f=-1;
int isfull()
{
 if(r==max-1)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
int isempty()
{
 if(f==-1||f>r)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
void enqueue()
{
 int element;
 if(isfull()==1)
 {
  printf("queue overflow");
 }
 else
 {
  printf("enter the element:");
  scanf("%d",&element);
  if(r==-1)
  {
   r=r+1;
   f=f+1;
  }
  else
  {
   r=r+1;
  }
  queue[r]=element;
 }
}
void dequeue()
{
 if(isempty()==1)
 {
  printf("queue underflow");
 }
 else
 {
  int element=queue[f];
  f=f+1;
  printf("the deleated element is:%d",element);
 }
}
void display()
{
 printf("queue elements are:");
 for(int i=f;i<=r;i++)
 {
  printf("%d  ",queue[i]);
 }
}
int main()
{
 int choice;
 do
 {
  printf("\nenter your choice:\n1:enqueue\n2:dequeue\n3:display\n4:quit\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
    enqueue();
    break;
   case 2:
    dequeue();
    break;
   case 3:
    display();
    break;
   case 4:
    exit(0);
    break;
   default:printf("enter a valid choice");
  }
 }while(choice!=4);
 return 0;
}
