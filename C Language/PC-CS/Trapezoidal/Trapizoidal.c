#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float x,float R)
{
    float y;
    y=(exp(R*x)/(exp(2*x)+1));
    return y;
}
void main()
{
    float a,b,h,sum2,R;
    float sum=0.0,sum1=0.0;
    int n,i,temp;
    printf("enter the value of a : ");
    scanf("%f",&a);
    printf("enter the value of b : ");
    scanf("%f",&b);
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("enter the last two digit of your roll:");
    scanf("%d", &temp);
    h=(b-a)/n;
    sum1=f(a,R)+f(b,R);
    sum2=0.0;
    R=0.1*temp;
    for(i=1;i<=(n-1);i++)
    {
        sum2=sum2+2*(f(a+i*h,R));
    }
    sum=(h/2)*(sum1+sum2);
    printf("The output is :%f",sum);
    printf("The value of pie : %f",(sum*4));
}
