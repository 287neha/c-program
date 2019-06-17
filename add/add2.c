#include<stdio.h>
int input(int *a,int *b)
{
 printf("enter the numbers");
 scanf("%d%d",a,b);
}
int compute(int a,int b,int *sum)
{
 *sum=a+b;
}
void output(int sum)
{
 printf("sum is %d",sum);
}
int main()
{
 int a,b,sum;
 input(&a,&b);
 compute(a,b,&sum);
 output(sum);
}



 
