#include<stdio.h>
#include<stdlib.h>
typedef struct nodes
{
 int coef;
 int exp;
 struct nodes next;
}node;
void allocate(int c,int e)
{
 node *newnode;
 newnode->coef=c;
 newnode->exp=e;
 newnode->next=0;
}
node *create(node *head)
{
 int ch=1,a,b;
 node *newnode,*prev;
 while(ch==1)
 {
 printf("enter the coefficient and exponent\n");
 scand("%d  %d",&a,&b);
 newnode=allocate(a,b);
 if(tail==0)
 {
  tail=newnode;
  tail->next=tail;
 }
 else
 {
  newnode->next=tail->next;
  tail->next=newnode;
  tail=newnode;
 }
 printf("1:continue\n2:stop");
 scanf("%d",&ch);
 }
 return tail;
}
node *insert(node *t3)
{
 if(t3==0)
 {
  t3=newnode;
 }
 else
 {
  newnode->next=t3->next;
  t3->next=newnode;
  t3=newnode;
 }
 return t3;
}
node *addpoly(node *t1,node *t2)
{
 
