#include<stdio.h>
void input(int *a,int *b, int *c)
{
 printf("enter the numbers");
 scanf("%d%d%d",a,b,c);
}
int compute(int a,int b,int c)
{  
 int max;
 max=(a>b ? (a>c?a:c):(b>c?b:c));
 return max;
}
void output(int max)
{
 printf("the largest number is %d",max);
}
int main()
{
 int a,b,c,max;
 input(&a,&b,&c);
 max=compute(a,b,c);
 output(max);
}
