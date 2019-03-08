#include<stdio.h>
void input(int a[100],int *n)
{
 int i;
 printf("enter the number of elements in array");
 scanf("%d",n);
 printf("enter the elements in array");
 for (i=0;i<*n;i++)
 {
  scanf("%d",&a[i]);
 }
}
void compute(int a[100],int n,int *sum)
{ 
 int i;
 *sum=0;
 {
  for(i=0;i<n;i++)
  *sum=*sum+a[i];
 }
}
void output(int sum)
{
 printf("the sum is %d",sum);
}
int main ()
{
 int a[100],n,sum;
 input(a,&n);
 compute(a,n,&sum);
 output(sum);
 return 0;
}
