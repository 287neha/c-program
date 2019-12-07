#include<stdio.h>
int partition(int a[20],int p,int r)
{
 int temp,x=a[r];
 int i=p;
 for(int j=0;j<r;j++)
 {
  if(a[j]<x)
  {
   temp=a[j];
   a[j]=a[i];
   a[i]=temp;
   i++;
  }
 }
 temp=a[i];
 a[i]=a[r];
 a[r]=temp;
 return i;
}
void quicksort(int a[20],int p,int r)
{
 int q;
 if(p<r)
 {
  q=partition(a,p,r);
  quicksort(a,p,q-1);
  quicksort(a,q+1,r);
 }
}
void display(int a[20],int n)
{
 printf("the sorted array is:");
 for(int i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
}
int main()
{
 int n,a[20];
 printf("enter the number of elements in array:");
 scanf("%d",&n);
 printf("enter the elements in array:");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 quicksort(a,0,n-1);
 display(a,n);
 return 0;
}
