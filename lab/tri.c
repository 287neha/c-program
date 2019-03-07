#include<stdio.h>
void input(int *n)
{
 printf("enter the  number of rows");
 scanf("%d",n);
}
void compute(int n)
{
 int i,j;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n-i;j++)
  {
   printf(" ");
  }
  for(j=1;j<=i;j++)
  {
   printf("* ");
  }
    printf("\n");
 }
}
int main()
{
 int n;
 input(&n);
 compute(n);
 return 0;
}
