#include<stdio.h>
void input(int *a,int *b, int *c)
{
 printf("enter the numbers");
 scanf("%d%d%d",a,b,c);
}
void compute(int a,int b,int c,int *small)
{
 if(a<b&&a<c)
 { 
  *small=a;
 }
 else if(b<a&&b<c)
 {
  *small=b;
 }
 else
 {
  *small=c;
 }
}
void output(int small)
{
 printf("the smallest number is %d",small);
}
int main()
{
 int a,b,c,small;
 input (&a,&b,&c);
 compute(a,b,c,&small);
 output(small);
 return 0;
}
