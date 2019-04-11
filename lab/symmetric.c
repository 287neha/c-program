#include<stdio.h>
void input(int *r,int *c,int a[100][100])
{
 int i,j;
 printf("enter the number of rows and columns in matrix");
 scanf("%d%d",r,c);
 printf("enter the elements in matrix");
 for(i=0;i<*r;i++)
 {
  for(j=0;j<*c;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
}
void transverse(int r,int c,int a[100][100],int b[100][100])
{
 int i,j;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   b[i][j]=a[j][i];
  }
 }
}
int compute(int r,int c,int a[100][100],int b[100][100])
{
 int i,j,m=0;
 if(r==c)
 {
  for(i=0;i<r;i++)
  { 
   for(j=0;j<c;j++)
   {
    if(a[i][j]==b[i][j])
    {
     m=1;
    }
    else
    {
     m=0;
    }
   }
  }
 }
 else 
 {
  m=2;
 }
 return m;
}
void output(int m)
{
 if(m==1)
 {
  printf("symmetric matrix");
 }
 else if(m==0)
 {
  printf("not a symmetric matrix");
 }
 else
 {
  printf("not a square matrix");
 }
}
int main()
{
 int r,c,a[100][100],b[100][100],m;
 input(&r,&c,a);
 transverse(r,c,a,b);
 m=compute(r,c,a,b);
 output(m);
 return 0;
}
 
