#include<stdio.h>
void input(int *n)
{
 printf("enter the number");
 scanf("%d",n);
}
void compute(int n,int *num,int *rev)
{
 *rev=0;
 while(n!=0)
 {
  *num=n%10;
  n=n/10;
  *rev=*num+10**rev;
 }
}
void output(int rev,int n)
{
 printf("the rev of the given number is %d",rev);
 if(rev==n)
 {
  printf("the given number is a palindrome");
 }
 else
 {
  printf("the given number is not a palindrome");
 }
}
int main()
{
 int n,num,rev;
 input(&n);
 compute(n,&num,&rev);
 output(n,rev);
 return 0;
}
 
