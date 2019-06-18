#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
void input(int *n,char a[50][20])
{
 printf("enter the number of strings");
 scanf("%d",n);
 printf("enter the strings"); 
 for(int i=0;i<*n;i++)
 {
  scanf("%s",a[i]);
 }
}
int compare(const void* p,const void* q)
{
 return strcmp((const char*) p,(const char*) q);
}
void output(int n,char a[50][20])
{
 printf("the sorted string is ");
 for(int i=0;i<n;i++)
 {
  printf("%s ",a[i]);
 }
}
int main()
{ 
 int n;
 char a[50][20];
 input(&n,a);
 qsort(a,n,20,compare);
 output(n,a);
}
