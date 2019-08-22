#include<stdio.h>
int num()
{
 int n;
 printf("enter the number of elements");
 scanf("%d",&n);
 return n;
}
void input(int *n,int a[n])
{
 int;
 printf("enter the number of elements in array");
 scanf("%d",n);
 printf("enter the elements");
 for(int i=0;i<*n;i++)
 {
  scanf("%d",&a[i]);
 }
}
void sort(int n,int a[n])
{
 int temp;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n-i-1;i++)
  {
   if(a[j]<a[j+1])
   {
    a[j]=temp;
    temp=a[j+1];
    a[j+1]=a[j];
   }
  }
 }
}
void qsort()
{
