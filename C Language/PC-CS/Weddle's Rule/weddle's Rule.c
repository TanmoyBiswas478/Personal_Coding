#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.141592
float f(float x)
{
    float y;
    y=((1/(sqrt(2*pi)))*exp(-x*x/2));
    return y;
}
int main()
{
    float a,b,h,sum1=0.0,sum,sum2;
    int n,i;
    printf("enter the value of a : ");
    scanf("%f",&a);
    printf("enter the value of b : ");
    scanf("%f",&b);
    printf("enter the value of n : ");
    scanf("%d",&n);
    h=(b-a)/n;
    sum=f(a)+f(b);
    for(i=1;i<=(n-1);i++)
    {
        if(i%6==0)
        {
         sum1 = sum1+2*(f(a+i*h));
        }
        else if(i%3==0)
        {
            sum1 = sum1+6*(f(a+i*h));
        }
          else if(i%2==0)
        {
            sum1 = sum1+(f(a+i*h));
        }
        else
            sum1=sum1+5*(f(a+i*h));
    }
  sum2=(3*h/10)*(sum1+sum);
    printf("The output is :%f",sum2);
    return 0;
}
