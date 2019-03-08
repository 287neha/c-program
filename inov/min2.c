#include<stdio.h>
void input(int *a,int *b,int *c)
{
 printf("enter the numbers");
 scanf("%d%d%d",a,b,c);
}
void compute(int a,int b ,int c,int *min)
{
 
 if(a<b)
 {
  if(a<=c)
  {
   *min=a;
  }
  else
  {
   *min =c;
  }
 }
 if (b<a)
 {
  if(b<=c)
  {
   *min=b;
  }
  else 
  {
   *min=c;
  }
 }
}
void output(int min)
{
 printf("min is %d",min);
}
int main()
{
 int a,b,c,min;
 input(&a,&b,&c);
 compute(a,b,c,&min);
 output(min);
 return 0;
}
