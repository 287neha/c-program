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
node *create(node *tail)
{
 int ch=1;
 node *newnode;
 while(ch==1)
 {
 newnode=allocate_node();
 if(tail==0)
 {
  tail=newnode;
  tail->next=tail;
 }
 else
 {
  newnode->next=tail->next;
  tail->next=newnode;
  tail = newnode;
 }
 printf("1:continue\n2:stop");
 scanf("%d",&ch);
 }
 return tail;
}
void display(node *tail)
{
 node *temp;
 temp=tail->next;
 while(temp!=tail)
 {
  printf("%d->",temp->data);
  temp=temp->next;
 }
 printf("%d->",tail->data);
 printf("%d",tail->next->data);
}
node *in_at_beg(node *tail)
{
 node *newnode;
 newnode=allocate_node();
 newnode->next=tail->next;
 tail->next=newnode;
 return tail;
}
node *in_at_mid(node *tail)  
{
 node *temp,*newnode;
 temp=tail->next;
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
 return tail;
}
node *in_at_end(node *tail)  
{
 node *newnode;
 newnode=allocate_node();
 newnode->next=tail->next;
 tail->next=newnode;
 tail=newnode;
 return tail;
}
node *del_at_beg(node *tail)
{
 node *temp;
 temp=tail->next;
 tail->next=temp->next;
 free(temp);
 return tail;
}
node *del_at_mid(node *tail)
{
 int i=0,pos;
 node *temp,*prev;
 temp=tail->next;
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
 return tail;
}
node *del_at_end(node *tail)
{
 node *temp,*prev;
 temp=tail->next;
 while(temp->next!=tail)
 {
  temp=temp->next;
 }
 temp->next=tail->next;
 prev=tail;
 tail=temp;
 free(prev);
 return tail;
}
int main()
{
 int choice;
 node *tail=0;
 do
 {
  printf("enter your choice:\n1:create\n2:display\n3:in_at_beg\n4:in_at_mid\n5:in_at_end\n6:del_at_beg\n7:del_at_mid\n8:del_at_end\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
    tail=create(tail);
    break;
   case 2:
    display(tail);
    break;
   case 3:
    tail=in_at_beg(tail);
    break;
   case 4:
    tail=in_at_mid(tail);
    break;
   case 5:
    tail=in_at_end(tail);
    break;
   case 6:
    tail=del_at_beg(tail);
    break;
   case 7:
    tail=del_at_mid(tail);
    break;
   case 8:
    tail=del_at_end(tail);
    break;
   case 9:
    exit(0);
  }
 }while(choice>=1&&choice<=8);
 return 0;
}
