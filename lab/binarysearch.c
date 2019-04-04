#include<stdio.h>
int num()
{
 int n;
 printf("enter the number of elements in array");
 scanf("%d",&n);
 return n;
}
void input(int *search,int n,int a[n])
{
 int i;
 printf("enter the elements in array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter the search element");
 scanf("%d",search);
}
int compute(int search,int n,int a[n])
{
 int first,last,mid,pos=0;
 first=0;
 last=n-1;
 while(first<last)
 {
  mid=(first+last)/2;
  if(a[mid]<search)
  {
   first=mid+1;
  }
  else if(a[mid]>search)
  {
   last=mid-1;
  }
  else  if(a[mid]==search)
  {
   pos=mid;
   return pos;
   break;
  }
 else 
 {
  printf("search element is not found");
 }
}
}#include<stdio.h>
int num()
{
 int n;
 printf("enter the number of elements in array");
 scanf("%d",&n);
 return n;
}
void input(int *search,int n,int a[n])
{
 int i;
 printf("enter the elements in array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter the search element");
 scanf("%d",search);
}
int compute(int search,int n,int a[n])
{
 int first,last,mid,pos=0;
 first=0;
 last=n-1;
 while(first<last)
 {
  mid=(first+last)/2;
  if(a[mid]<search)
  {
   first=mid+1;
  }
  else if(a[mid]>search)
  {
   last=mid-1;
  }
  else  if(a[mid]==search)
  {
   pos=mid;
   return pos;
   break;
  }
 else 
 {
  printf("search element is not found");
 }
}
}
 

void output(int pos)
{
 printf("the position of the element is %d",pos+1);
}
int main()
{
 int n;
 n=num();
 int search,a[n],pos;
 input(&search,n,a);
 pos=compute(search,n,a);
 output(pos);#include<stdio.h>
int num()
{
 int n;
 printf("enter the number of elements in array");
 scanf("%d",&n);
 return n;
}
void input(int *search,int n,int a[n])
{
 int i;
 printf("enter the elements in array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter the search element");
 scanf("%d",search);
}
int compute(int search,int n,int a[n])
{
 int first,last,mid,pos=0;
 first=0;
 last=n-1;
 while(first<last)
 {
  mid=(first+last)/2;
  if(a[mid]<search)
  {
   first=mid+1;
  }
  else if(a[mid]>search)
  {
   last=mid-1;
  }
  else  if(a[mid]==search)
  {
   pos=mid;
   return pos;
   break;
  }
 else 
 {
  printf("search element is not found");
 }
}
}
 

void output(int pos)
{
 printf("the position of the element is %d",pos+1);
}
int main()
{
 int n;
 n=num();
 int search,a[n],pos;
 input(&search,n,a);
 pos=compute(search,n,a);
 output(pos);
 return 0;
}
 return 0;
}
 
#include<stdio.h>
int num()
{
 int n;
 printf("enter the number of elements in array");
 scanf("%d",&n);
 return n;
}
void input(int *search,int n,int a[n])
{
 int i;
 printf("enter the elements in array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter the search element");
 scanf("%d",search);
}
int compute(int search,int n,int a[n])
{
 int first,last,mid,pos=0;
 first=0;
 last=n-1;
 while(first<last)
 {
  mid=(first+last)/2;
  if(a[mid]<search)
  {
   first=mid+1;
  }
  else if(a[mid]>search)
  {
   last=mid-1;
  }
  else  if(a[mid]==search)
  {
   pos=mid;
   return pos;
   break;
  }
 else 
 {
  printf("search element is not found");
 }
}
}
 

void output(int pos)
{
 printf("the position of the element is %d",pos+1);
}
int main()
{
 int n;
 n=num();
 int search,a[n],pos;
 input(&search,n,a);
 pos=compute(search,n,a);
 output(pos);
 return 0;
}
void output(int pos)
{
 printf("the position of the element is %d",pos+1);
}
int main()
{
 int n;
 n=num();
 int search,a[n],pos;
 input(&search,n,a);
 pos=compute(search,n,a);
 output(pos);
 return 0;
}
