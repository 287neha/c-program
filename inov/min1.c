#include<stdio.h>
void input(int *a,int *b,int *c)
{
 printf("enter the numbers");
 scanf("%d%d%d",a,b,c);
}
void compute(int a,int b,int c)
{
 if(a<=b)
 {
  if(a<=c)
  {
   printf("%d is min",a);
  }
  else 
  {
   printf("%d is min",c);
  }
 }
 if(b<a)
 {
  if(b<=c)
  {
   printf("%d is min",b);
  }
  else
  { 
   printf("%d is min",c);
  }
 }
}
int main()
{  
 int a,b,c;
 input(&a,&b,&c);
 compute(a,b,c);
 return 0;
}
