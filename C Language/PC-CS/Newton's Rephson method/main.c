#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
  float f(float x);
  float d(float y);
  float a,b,c,x,E,h;
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
printf("The root is lying between %f & %f\n",a,b);
c=(a+b)/2;
do
  {
      h=f(c)/d(c);
      x=c-h;
      c=x;
  }
  while(fabs(h)>E);
    printf("the final value of root is : %f",x);
}
float f(float z)
{
    return(pow(z,4)-12);
}
float d(float y)
{
    return(4*pow(y,3));
}
