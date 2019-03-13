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
void compute(struct fraction f1,struct fraction f2, struct fraction *sum)
{
 sum->numerator=(f1.numerator*f2.denominator)+(f2.numerator*f1.denominator);
 sum->denominator=(f1.denominator*f2.denominator);
}
void output(struct fraction sum)
{
 printf("sum %d/%d",sum.numerator,sum.denominator);
}
int main()
{ 
 struct fraction f1,f2,sum;
 input(&f1,&f2);
 compute(f1,f2,&sum);
 output(sum);
 return 0;
}
