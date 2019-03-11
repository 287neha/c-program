#include<stdio.h>
void input(int *a,int *b, int *c)
{
 printf("enter the numbers");
 scanf("%d%d%d",a,b,c);
}
int compute(int a,int b,int c)
{
 int min;
 min = (a<b ? (a<c?a:c):(b<c?b:c));
 return min;
}
void output(int min)
{
 printf("the minimum is %d",min);
}
int main()
{
 int a,b,c,min;
 input(&a,&b,&c);
 min=compute(a,b,c);
 output(min);
 return 0;
}
