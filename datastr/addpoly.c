#include<stdio.h>
#include<stdlib.h>
typedef struct nodes
{
 int coef;
 int exp;
 struct nodes *next;
}node;
void allocate(int c,int e)
{
 node *newnode;
 newnode->coef=c;
 newnode->exp=e;
 newnode->next=0;
}
node *create(node *tail)
{
 int ch=1,a,b;
 node *newnode;
 while(ch==1)
 {
 printf("enter the coefficient and exponent\n");
 scanf("%d  %d",&a,&b);
 allocate(a,b);
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
 node *newnode;
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
node *addpoly(node *t1,node *t2,node *t3)
{
 node *temp1,*temp2;
 temp1=t1->next;
 temp2=t2->next;
 while(temp1!=t1&&temp2!=t2)
 {
  if(temp1->exp==temp2->exp)
  {
   allocate(temp1->coef+temp2->coef,temp1->exp);
   t3=insert(t3);
   temp1=temp1->next;
   temp2=temp2->next;
  }
  else if(temp1->exp>temp2->exp)
  {
   allocate(temp1->coef,temp1->exp);
   t3=insert(t3);
   temp1=temp1->next;
  }
  else
  {
   allocate(temp2->coef,temp2->exp); 
   t3=insert(t3);
   temp2=temp2->next;
  }
 }
 while(temp1!=t1->next)
 {
  t3=insert(t3);
  temp1=temp1->next;
 }
 while(temp2!=t2->next)
 {
  t3=insert(t3);
  temp2=temp2->next;
 }
 return t3;
}
void display(node *t3)  
{
 node *temp;
 temp=t3->next;
 while(temp!=0)
 {
  printf("%dx^%d +",temp->coef,temp->exp);
  temp=temp->next;
 }
}
int main()
{
 node *t1=0,*t2=0,*t3=0;
 t1=create(t1);
 t2=create(t2);
 t3=addpoly(t1,t2,t3);
 return 0;
}
 
