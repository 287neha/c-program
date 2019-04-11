#include<stdio.h>
int num()
{
 int n;
 printf("enter the number of elements in array");
 scanf("%d",&n);
 return n;
}
void input(int n,int a[n],int *search)
{
 int i;
 printf("enter the elements in array");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter the search element");
 scanf("%d",search);
}
int compute(int n,int search,int a[n])
{
 int i,pos;
 for(i=0;i<n;i++)
 { 
  if(search==a[i])
  {
   pos=i;
  }
 }
 return pos;
}
void output(int pos)
{
 printf("the position of search element is %d",pos+1);
}
int main()
{
 int n, a[n],search,pos;
  n=num;
 input(n,a,&search);
 pos=compute(n,search,a[n]);
 output(pos);
 return 0;
}
 
