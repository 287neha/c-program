#include<stdio.h>
#include<math.h>
struct complex
{
 int real,im1,im2;
};
void input(int *a,int *b,int *c)
{
 printf("enter the coefficients if equation");
 scanf("%d%d%d",a,b,c);
}
void compute(int *D, int a,int b,int c,int *r1,int *r2,struct complex *c1,struct complex *c2)
{
 c1->real=0,c1->im1=0,c2->real=0,c2->im2=0;
 *D=b*b-4*a*c;
 if(D>0)
 {
  *r1=(-b+sqrt(*D))/2*a;
  *r2=(-b-sqrt(*D))/2*a;
 }
 if(*D==0)
 {
  *r1=*r2=(-b)/2*a;
 }
 if(*D<0)
 {
  c1->real=(-b)/2*a;
  c1->im1=(sqrt(-*D))/2*a;
  c2->real=(-b)/2*a;
  c2->im2=(sqrt(-*D))/2*a;
 }
}
void output(int D,int r1,int r2,struct complex c1,struct complex c2)
{
 if(D>0)
 {
  printf("real and distinct roots %d%d",r1,r2);
 }
 if(D==0)
 {
  printf("real and equal roots %d%d",r1,r2);
 }
 if(D<0)
 {
  printf("complex roots %d+%di",c1.real,c1.im1);
  printf(" %d-%di",c2.real,c2.im2);
 }
}
int main()
{
 struct complex c1,c2;
 int a,b,c,D,r1,r2;
 input(&a,&b,&c);
 compute(&D,a,b,c,&r1,&r2,&c1,&c2);
 output(D,r1,r2,c1,c2);
 return 0;
}
