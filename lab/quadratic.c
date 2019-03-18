#include<stdio.h>
#include<math.h>
struct complex
{
 float real,im;
};
void input(float *a,float *b,float *c)
{
 printf("enter the coefficients of equation");
 scanf("%f%f%f",a,b,c);
}
void compute(float *D, float a,float b,float c,float *r1,float *r2,struct complex *c1,struct complex *c2)
{
 c1->real=0,c1->im=0,c2->real=0,c2->im=0;
 *D=(b*b)-(4*a*c);
 if(D>0)
 {
  *r1=(-b+sqrt(*D))/(2*a);
  *r2=(-b-sqrt(*D))/(2*a);
 }
 if(*D==0)
 {
  *r1=*r2=(-b)/(2*a);
 }
 if(*D<0)
 {
  c1->real=(-b)/(2*a);
  c1->im=(sqrt(-*D))/(2*a);
  c2->real=(-b)/(2*a);
  c2->im=(sqrt(-*D))/(2*a);
 }
}
void output(float D,float r1,float r2,struct complex c1,struct complex c2)
{
 if(D>0)
 {
  printf("real and distinct roots %0.3f%0.3f",r1,r2);
 }
 if(D==0)
 {
  printf("real and equal roots %0.3f%0.3f",r1,r2);
 }
 if(D<0)
 {
  printf("complex roots %0.3f+%0.3fi",c1.real,c1.im);
  printf(" %0.3f-%fi",c2.real,c2.im);
 }
}
int main()
{
 struct complex c1,c2;
 float a,b,c,D,r1,r2;
 input(&a,&b,&c);
 compute(&D,a,b,c,&r1,&r2,&c1,&c2);
 output(D,r1,r2,c1,c2);
 return 0;
}
