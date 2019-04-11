#include<stdio.h>
void input(int *n,int *r)
{
 printf("enter the total number of objects");
 scanf("%d",n);
 printf("enter the number of objects to be arranged,selected");
 scanf("%d",r);
}
int permutation(int n,int r)
{
 int per,i,j,num=1,c=1;
 if(r<=n)
 {
  for(i=2;i<=n;i++)
  {
   num=num*i;
  }
  for(j=2;j<=r;j++)
  {
   c=c*j;
  }
  per=(num/c);
 }
 return per;
}
int combination(int n,int r)
{
 int com,i,j,num=1,c=1,b=1;
 if(r<=n)
 {
  for(i=1;i<=n;i++)
  {
   num=num*i;
  }
  for(j=1;j<=r;j++)
  {
   c=c*j;
  }
  for(j=1;j<=(n-r);j++)
  {
   b=b*j;
  }
  com=(num/(b*c));
 }
 return com;
}
void output(int per,int com)
{
 printf("the permutation is %d",per);
 printf("the combination is %d",com);
}
int main()
{
 int n,r,per,com;
 input(&n,&r);
 per=permutation(n,r);
 com=combination(n,r);
 output(per,com);
 return 0;
}
