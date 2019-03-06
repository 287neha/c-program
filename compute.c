#include<stdio.h>
void input(int *a,int *b)
{
 printf("enter the numbers");
 scanf("%d%d", a,b);
}
void compute(int a, int b,int *small)
{ 
 if(a<b)
 {
  *small=a;
 }
 else
 {
  *small=b;
 }
}
void output(int m)
{ 
 printf("the smaller number is %d" ,m);
}
int main()
{ 
 int a,b,small;
 input (&a,&b);
 compute(a,b,&small);
 output(small);
 return 0;
}
 
