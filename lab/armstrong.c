#include<stdio.h>
void input(int *num)
{
 printf("enter the number");
 scanf("%d",num);
}
void compute(int num,int *sum )
{ 
 int n,r;
 *sum=0;
 n=num;
 while(n!=0)
 {
  r=n%10;
  *sum=*sum+(r*r*r);
  n=n/10;
 }
}
void output(int num,int sum)
{
 if (sum==num)
 {
  printf("the given number is armstrong number");
 }
 else
 {
  printf("the given number is not an arnstrong number");
 }
}
int main()
{
 int num,sum;
 input(&num);
 compute(num,&sum);
 output(num,sum);
 return 0;
}
 
