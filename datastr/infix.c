#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 10
int push(char);
char pop();
char infix[max];
char postfix[max];
char stack[max];
char ch;
int p(char);
int top=-1;
int main()
{
 int k=0,i=0,element;
 printf("enter the infix expression  ");
 scanf("%s",infix);
 while((ch=infix[i++])!='\0')
 {
  if(ch=='(')
  {
   push(ch);
   strcat(infix,")");
  }
  else
  {
   if(isalnum(ch))
   {
    postfix[k++]=ch;
   }
   else
   {
    if(ch==')')
    { 
     while(stack[top]!='(')
     {
      postfix[k++]=pop();
     }
     element=pop();
    }
    else
    {
    while(p(stack[top])>=p(ch))
    {
     postfix[k++]=pop();
    }
    push(ch);
    }
   }
  }
 }
 printf("postfix exp =%s  ",postfix);
 return 0;
}
int push(char ele)
{
 stack[++top]=ele;
 return 0;
}
char pop()
{
 return stack[top--];
}
int p(char ch)
{
 if(ch=='^')
 {
 return 3;
 }
 else if(ch=='*'||ch=='/')
 {
 return 2;
 }
 else if(ch=='+'||ch=='-')
 {
 return 1;
 }
 else
 { 
 return 0;
 }
}
      
      
      
      
      
      
