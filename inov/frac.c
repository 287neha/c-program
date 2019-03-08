#include<stdio.h>
struct fraction
{
 int numerator,denominator;
};
void input(struct fraction *f1,struct fraction *f2)
{
 printf("for first number");
 printf("\nenter the numerator");
 scanf("%d",&f1->numerator);
 printf("enter the denominator");
 scanf("%d",&f1->denominator);
 printf("for second number");
 printf("\nenter the numerator");
 scanf("%d",&f2->numerator);
 printf("enter the denominator");
 scanf("%d",&f2->denominator);
}
void compute(struct fraction f1,struct fraction f2, int *num,int *deno)
{
 *num=(f1.numerator*f2.denominator+f2.numerator*f1.denominator);
 *deno=(f1.denominator*f2.denominator);
}
void output(int num,int deno)
{
 printf("num is %d",num);
 printf("deno is %d",deno);
}
int main()
{ 
 int num,deno;
 struct fraction f1,f2;
 input(&f1,&f2);
 compute(f1,f2,&num,&deno);
 output(num,deno);
 return 0;
}
 
 
