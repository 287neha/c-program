#include<stdio.h>
#include<stdlib.h>
void input(int *n,int a[50])
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
int compare(const void* a,const void* b)
{
 return(*(int*)a-*(int*)b);
}
void output(int a[50],int n)
{
 int i;
 printf("sorted array is");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
}
int main()
{
 int n,a[50];
 input(&n,a);
 qsort(a,n,sizeof(int),compare);
 output(a,n);
 return 0;
}
