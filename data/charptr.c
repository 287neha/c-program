#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void string(int n,char *s[])
{
 char a[20];
 for(int i=0;i<n;i++)
 {
  printf("enter the word : ");
  scanf("%s",a);
  s[i]=malloc(strlen(a)+1);
  strcpy(s[i],a);
 }
}
int compare(const void* p,const void* q)
{
 return strcmp(*(const char**) p,*(const char**) q);
} 
void output(int n,char *s[45])
{
 printf("the sorted string is: ");
 for(int i=0;i<n;i++)
 {
  printf("%s  ",s[i]);
 }
}
int main()
{
 int n;
 printf("enter the number of words : ");
 scanf("%d",&n);
 char *s[n];
 string(n,s);
 qsort(s,n,sizeof(char*),compare);
 output(n,s);
 for(int i=0;i<n;i++)
 {
  free(s[i]);
 }
 return 0;
}
