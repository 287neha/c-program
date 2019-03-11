#include<stdio.h>
#include<math.h>
void input(float *x, int *n, int a[40])
{
 int i;
 printf("enter n");
 scanf("%d",n);
 printf("enter the elements in array");
 for (i=0;i<*n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter x");
 scanf("%f",x);
}
void compute(float x,int n,int a[40], float *sum)
{
 int i;
 for(i=0;i<n;i++)
 {
  *sum=*sum+a[i]*pow(x,i);
 }
}
void output(float sum)
{
 printf("the value of polynomial is %f",sum);
}
int main()
{
 float x,sum;
 int n,a[40];
 input(&x,&n,a);
 compute(x,n,a,&sum);
 output(sum);
 return 0;
}
 
 
