#include<stdio.h>
#include<stdlib.h>
typedef struct nodes
{
 int data;
 struct nodes *next;
}node;
node *allocate_node()
{
 node *newnode;
 newnode=(node*)malloc(sizeof(node));
 printf("enter the element in list\t");
 scanf("%d",&newnode->data);
 newnode->next=0;
 return newnode;
}
node *create(node *head)
{
 int ch=1;
 node *newnode,*prev;
 prev=head;
 while(ch==1)
 {
 newnode=allocate_node();
 if(head==0)
 {
  head=newnode;
  prev=newnode;
 }
 else
 {
  prev->next=newnode;
  prev=newnode;
 }
 printf("1:continue\n2:stop");
 scanf("%d",&ch);
 }
 return head;
}
void display(node *head)
{
 node *temp;
 temp=head;
 while(temp!=0)
 {
  printf("%d->",temp->data);
  temp=temp->next;
 }
 printf("null");
}
node *in_at_beg(node *head)
{
 node *newnode;
 newnode=allocate_node();
 newnode->next=head;
 head=newnode;
 return head;
}
node *in_at_mid(node *head)  
{
 node *temp,*newnode;
 temp=head;
 int i=1,pos;
 printf("enter the position for insertion:\t");
 scanf("%d",&pos);
 while(i<pos-1)
 {
  temp=temp->next;
  i++;
 }
 newnode=allocate_node();
 newnode->next=temp->next;
 temp->next=newnode;
 return head;
}
node *in_at_end(node *head)  
{
 node *temp,*newnode;
 temp=head;
 while(temp->next!=0)
 {
  temp=temp->next;
 }
 newnode=allocate_node();
 temp->next=newnode;
 return head;
}
node *del_at_beg(node *head)
{
 node *temp;
 temp=head;
 head=head->next;
 free(temp);
 return head;
}
node *del_at_mid(node *head)
{
 int i=0,pos;
 node *temp,*prev;
 temp=head;
 printf("enter the position for insertion:\t");
 scanf("%d",&pos);
 while(i<=pos-1)
 {
  prev=temp;
  temp=temp->next;
  i++;
 }
 prev->next=temp->next;
 free(temp);
 return head;
}
node *del_at_end(node *head)
{
 node *temp,*prev;
 temp=head;
 while(temp->next!=0)
 {
  prev=temp;
  temp=temp->next;
 }
 prev->next=0;
 free(temp);
 return head;
}
int main()
{
 int choice;
 node *head=0;
 do
 {
  printf("enter your choice:\n1:create\n2:display\n3:in_at_beg\n4:in_at_mid\n5:in_at_end\n6:del_at_beg\n7:del_at_mid\n8:del_at_end\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
    head=create(head);
    break;
   case 2:
    display(head);
    break;
   case 3:
    head=in_at_beg(head);
    break;
   case 4:
    head=in_at_mid(head);
    break;
   case 5:
    head=in_at_end(head);
    break;
   case 6:
    head=del_at_beg(head);
    break;
   case 7:
    head=del_at_mid(head);
    break;
   case 8:
    head=del_at_end(head);
    break;
   case 9:
    exit(0);
  }
 }while(choice>=1&&choice<=8);
 return 0;
}
