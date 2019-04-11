#include<stdio.h>
int num()
{
 int n;
 printf("enter the number of elements");
 scanf("%d",&n);
 return n;
}
void compute(int n)
{
 int i,a[n];
 a[0]=0;
 a[1]=1;
 for(i=2;i<n;i++)
 {
  a[i]=a[i-2]+a[i-1];
 }
}
void output(int n)
{
 int i,a[n];
  printf("the fibonacci series is");
 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }
}
int main()
{
 int n;
 n=num();
 compute(n);
 output(n);
 return 0;
}
