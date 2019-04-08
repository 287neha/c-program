#include<stdio.h>
void input(int *a)
{
 printf("enter the number");
 scanf("%d",a);
}
int compute(int a)
{
 int i,num;
 for(i=2;i<a-1;i++)
 {
  num=a%i;
 }
 return num;
}
void output(int a,int num)
{
 if(num==0)
 {
  printf("a is prime");
 }
 else
 {
  printf("a is not a prime");
 }
}
int main()
{
 int a,num;
 input(&a);
 num=compute(a);
 output(a,num);
 return 0;
}
