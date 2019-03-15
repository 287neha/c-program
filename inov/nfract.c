#include<stdio.h>
struct fraction
{
 int num,deno;
};
int elements()
{
 int n;
 printf("enter the number of elements");
 scanf ("%d",&n);
 return n;
}
void input(struct fraction f[],int n )
{
 int i;
 
 for(i=0;i<n;i++)
 {
 printf("enter the elements in numerator");
  scanf("%d",&f[i].num);
 printf("enter the elements in denominator");
  scanf("%d",&f[i].deno);
 }
}
void compute(struct fraction f[],struct fraction *sum,int n)
{
 int i;
 sum->num = f[0].num;
 sum->deno = f[0].deno;
 for(i=1;i<n;i++)
 {
  sum->num=(sum->num)*(f[i].deno)+(sum->deno)*(f[i].num);
  sum->deno=(sum->deno)*(f[i].deno);
 }
}
void output(struct fraction sum)
{
 printf("the sum is %d/%d",sum.num,sum.deno);
}
int main()
{
 int n;
 struct fraction f[10],sum;
 n=elements();
 input(f,n);
 compute(f,&sum,n);
 output(sum);
 return 0;
}
