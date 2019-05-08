#include<stdio.h>
void input(char *type,float *t)
{
 printf("enter the type:\n car:c\n bus:b\n tempo:t\n");
 scanf("%c",type);
 printf("enter the time in hours");
 scanf("%f",t);
}
int compute(char type,float t)
{
 float fare;
 switch(type)
 {
 case 'c':case 'C':
 {
  if(t<=2)
  {
   fare=t*20;
  }
  else if(t>2)
  {
   fare=40+30*(t-2);
  }
 }
 break;
 case 'b':case 'B':
 {
  if(t<=4)
  {
   fare=t*40;
  }
  else if(t>4)
  {
   fare=160+50*(t-4);
  }
 }
 break;
 case 't':case 'T':
 {
  if(t<=3)
  {
   fare=t*30;
  }
  else if(t>3)
  {
   fare=90+40*(t-3);
  }
 }
 break;
 }
 return fare;
}
void output(float fare)
{
 printf("the rate is %f Rs",fare);
}
int main()
{
 char type;
 float t,fare;
 input(&type,&t);
 fare=compute(type,t);
 output(fare);
 return 0;
}
