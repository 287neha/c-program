#include<stdio.h>
#include<stdlib.h>
typedef struct nodes
{
 int data;
 struct nodes *next;
}node;
node *head=0;
node *r=0;
node *f=0;
void enqueue();
void dequeue();
void display();
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
   default:printf("enter a valid choice");
  }
 }while(choice!=4);
 return 0;
}
void enqueue()
{
 node *newnode;
 newnode=(node*)malloc(sizeof(node));
 printf("enter the element");
 scanf("%d",&newnode->data);
 newnode->next=0;
 if(head==0)
 {
  head=newnode;
  r=newnode;
  f=newnode;
 }
 else
 {
  r->next=newnode;
  r=newnode;
 }
}
void dequeue()
{
 node *temp;
 if(f==0||f>r)
 {
  printf("queue underflow");
 }
 else
 {
   temp=head;
   f=f->next;
   head=f;
   free(temp);
  }
 }
void display()
{
 node *temp=head;
 while(temp!=0)
 {
  printf("%d->",temp->data);
  temp=temp->next;
 }
 printf("null");
}
