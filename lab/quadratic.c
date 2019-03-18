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
void compute(float a,float b,float c,float *d,struct complex *c1,struct complex *c2)
{
 c1->real=0,c1->im=0,c2->real=0,c2->im=0;
 *d=(b*b)-(4*a*c);
 if(d>0)
 {
  c1->real=(-b+sqrt(*d))/(2*a);
  c1->im=c2->im=0;
  c2->real=(-b-sqrt(*d))/(2*a);
 }
 if(*d==0)
 {
  c1->real=(-b)/(2*a);
  c2->real=(-b)/(2*a);
  c1->im=c2->im=0;
 }
 if(*d<0)
 {
  c1->real=(-b)/(2*a);
  c1->im=(sqrt(-*d))/(2*a);#include<stdio.h>
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
void compute(float a,float b,float c,float *d,struct complex *c1,struct complex *c2)
{
 c1->real=0,c1->im=0,c2->real=0,c2->im=0;
 *d=(b*b)-(4*a*c);
 if(d>0)
 {
  c1->real=(-b+sqrt(*d))/(2*a);
  c1->im=c2->im=0;
  c2->real=(-b-sqrt(*d))/(2*a);
 }
 if(*d==0)
 {
  c1->real=(-b)/(2*a);
  c2->real=(-b)/(2*a);
  c1->im=c2->im=0;
 }
 if(*d<0)
 {
  c1->real=(-b)/(2*a);
  c1->im=(sqrt(-*d))/(2*a);
  c2->real=(-b)/(2*a);
  c2->im=(sqrt(-*d))/(2*a);
 }
}
void output(struct complex c1,struct complex c2)
{
 
 printf(" roots are %0.3f+%0.3fi  ",c1.real,c1.im);
 printf(" %0.3f-%0.3fi",c2.real,c2.im);
}
int main()
{
 struct complex c1,c2;
 float a,b,c,d;
 input(&a,&b,&c);
 compute(a,b,c,&d,&c1,&c2);
 output(c1,c2);
 return 0;
}
  c2->real=(-b)/(2*a);
  c2->im=(sqrt(-*d))/(2*a);
 }
}
void output(struct complex c1,struct complex c2)
{
 
 printf(" roots are %0.3f+%0.3fi  ",c1.real,c1.im);
 printf(" %0.3f-%0.3fi",c2.real,c2.im);
}
int main()
{
 struct complex c1,c2;
 float a,b,c,d;
 input(&a,&b,&c);
 compute(a,b,c,&d,&c1,&c2);
 output(c1,c2);
 return 0;
}
