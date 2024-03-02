#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
  float f(float x);
  float a,b,c,E;
  printf("Enter the error value : ");
  scanf("%f",&E);
  for(int i=0;;i++)
  {
      if(f(i)*f(i+1)<0)
      {
          a=i;
          b=i+1;
          break;
      }
  }
  printf("The value of A is :%f\n",a);
  printf("The value of B is :%f\n",b);
  while(fabs(a-b)>E)
  {
      c=(a+b)/2;
      if(f(a)*f(c)<0)
      {
          b=c;
      }
      else
      {
          a=c;
      }
  }
  printf("The value of c is :%f\n",c);
}
float f(float x)
{
    float y;
    y=x*tan(x)-1.28;
    return y;
}
