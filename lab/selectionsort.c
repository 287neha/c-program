#include<stdio.h>
void input(int a[20],int *n)
{
 int i;
 printf("enter the size of array");
 scanf("%d",n);
 printf("enter the elements in array");
 for(i=0;i<*n;i++)
 {
  scanf("%d",&a[i]);
 }
}
void compute(int a[20],int n)
{
 int i,j,temp,pos;
 for(i=0;i<n;i++)
 {
  pos=i;
  for(j=i+1;j<n;j++)
  {
   if(a[pos]>a[j])
   {
    pos=j;
   }
  }
  if(pos!=i)
  {
   temp=a[i];
   a[i]=a[pos];
   a[pos]=temp;
  }
 }
 printf("the sorted array is");
 for(i=0;i<n;i++)
 {
  printf("\n%d",a[i]);
 }
}
void output(int n, int a[20])
{
 printf("\nthe minimum element is %d",a[0]);
 printf("\nthe maximum element is %d",a[n-1]);
}
int main()
{
 int a[20],n;
 input(a,&n);
 compute(a,n);
 output(n,a);
 return 0;
}
