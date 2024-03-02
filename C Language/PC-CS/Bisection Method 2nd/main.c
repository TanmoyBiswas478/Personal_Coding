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
  printf("The initial value of A is :%f\n",a);
  printf("The initial value of B is :%f\n",b);
  int z=1;
  printf("number of iteration :      ");
  printf("The value of  A is :   ");
  printf("The value of  B is :   ");
  printf("The value of  C is :   ");
  printf("The value of function is :    \n");
  while(fabs(a-b)>E)
  {
      c=(a+b)/2;
      if(z<=9)
      {
          printf("       %d                   ",z);
          printf("%f             ",a);
          printf("%f                ",b);
          printf("%f                ",c);
          if(f(c)>0)
            printf(" %f\n",f(c));
          else
            printf("%f\n",f(c));
      }
      else
      {
          printf("       %d                   ",z);
          printf("%f             ",a);
          printf("%f                ",b);
          printf("%f                ",c);
          if(f(c)>0)
            printf(" %f\n",f(c));
          else
            printf("%f\n",f(c));
      }
      if(f(a)*f(c)<0)
        b=c;
      else
        a=c;
      z++;
  }
  printf("The final value of c is :%f\n",c);
}
float f(float x)
{
    float y;
    y=x*tan(x)-1.28;
    return y;
}

