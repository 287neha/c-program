#include<stdio.h>
void input(int *m1,int *n1,int *m2,int*n2,int a[10][10],int b[10][10])
{
 int i,j;
 printf("enter the number of rows and columns for first matrix\n");
 scanf("%d%d",m1,n1);
 printf("enter the elements in rows");
 printf("enter the elements in columns");
 for(i=0;i<*m1;i++)
 {
  for(j=0;j<*n1;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("enter the number of rows and columns for second matrix\n");
 scanf("%d%d",m2,n2);
 printf("enter the elements in rows");
 printf("enter the elements in  columns");
 for(i=0;i<*m2;i++)
 {
  for(j=0;j<*n2;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
}
void compute(int m1,int n1,int m2,int n2,int prod[10][10],int a[10][10],int b[10][10])
{ 
 int i,j,k;
 if(n1==m2)
 {
  for(i=0;i<m1;i++)
  {
   for(j=0;j<n1;j++)
   {
    prod[i][j]=0;
    for(k=0;k<n1;++k) 
    { 
     prod[i][j]+=a[i][k]*b[k][j];
    }
   }
  }
 }
}
void output(int m1,int n2,int prod[10][10])
{
 int i,j;
 printf("product of matrices is \n");
 for(i=0;i<m1;i++)
 { 
  printf("\n");
  for(j=0;j<n2;j++)
  {
   printf(" %d",prod[i][j]);
  }
 }
 for(n1!=m2)
 {
  printf("product is not possible");
 }
}
int main()
{
 int m1,n1,m2,n2,a[10][10],b[10][10],prod[10][10];
 input(&m1,&n1,&m2,&n2,a,b);
 compute(m1,n1,m2,n2,prod,a,b);
 output( m1,n2,prod);
 return 0;
}
