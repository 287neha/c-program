#include<stdio.h>
void input(int a[200],int *n)
{
 int i;
 printf("enter the number of elements in array");
 scanf("%d",n);
 printf("enter the elements in array");
 for(i=0;i<*n;i++)
 {
  scanf("%d",&a[i]);
 }
}
void compute(int a[200],int n)
{ 
 int i,j,temp;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
}
void output(int a[200],int n)
{
 int i;
 printf("sorted array is: "); 
 for(i=0;i<n;i++)
 {
  printf(" %d",a[i]);
 }
}
int main()
{
 int a[200],n;
 input(a,&n);
 compute(a,n);
 output(a,n);
 return 0;
}
