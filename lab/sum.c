#include<stdio.h>
void input(int *num)
{
 printf("enter your marks");
 scanf("%d",num);
}
void compute(int num)
{
 if(num>=80)
 {
  printf("grade is A");
 }
 else if (num>=60)
 {
  printf("grade is B");
 }
 else if (num >=40)
 {
  printf("grade is C");
 }
 else if(num<40)
 {
  printf("failed in this exam");
 }
}
int main()
{
 int num;
 input(&num);
 compute(num);
 return 0;
}

