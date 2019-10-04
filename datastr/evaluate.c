#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define max 20
int stack[max];
int num[max];
int top=-1;
char postfix[max];
int main()
{
 int i,result;
 char ch;
 printf("enter the postfix expression");
 scanf("%s",postfix);
 strcat(postfix,")");
 for(i=0;postfix[i]!='\0';i++)
 {
  ch=postfix[i];
  if(isalnum(ch))
  {
   printf("%c ",ch);
   scanf("%d",&num[i]);
  }
 }
 for(i=0;postfix[i]!='\0';i++)
 {
  ch=postfix[i];
  if(isalnum(ch))
  {
   stack[++top]=num[i];
  }
  else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
  {
   switch(ch)
   {
    case '+':
    result=stack[top-1]+stack[top];
    break;
    case '-':
    result=stack[top-1]-stack[top];
    break;
    case '*':
    result=stack[top-1]*stack[top];
    break;
    case '/':
    result=stack[top-1]/stack[top];
    break;
    case '^':
    result=pow(stack[top-1],stack[top]);
    break;
   }
   top=top-1;
   stack[top]=result;
  }
  else
  {
   printf("result %d",stack[top]);
  }
 }
 return 0;
}
    
 
