#include<stdio.h>
void input(int *a,int *b, int *c)
{
 printf("enter the numbers");
 scanf("%d%d%d",a,b,c);
}
void compute(int a ,int b,int c)
{
 if(a<b&&a<c)
 {
  printf("min is %d",a);
 }
 else if(b<a&&b<c)
 {
  printf("min is %d",b);
 }
 else
 {
  printf("min is %d",c);
 }
}
int main()
{
 int a,b,c;
 input(&a,&b,&c);
 compute(a,b,c);
 return 0;
}
