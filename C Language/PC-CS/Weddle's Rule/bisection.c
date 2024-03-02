#include<stdio.h>
#include<stdio.h>
#include<conio.h>
float f(float x)
{
    float y=(x*tan(x)-1.28);
    return y;

}

    int main()
    {
        float a,b,x=0,eps=0.0001,c    ;
        int i,count=0;

    for(i=0;i<100;i++)
    {
        if(f(i)*f(i+1)<0.0)
    {
    a=1;
    b=i+1;
    break;
    }
    }
    do
    {
        c=x;
        x=(a+b)/2;
        if(f(b)*f(x)<0.0)
            a=x;
        else
            b=x;

    }while(fabs(x-c)>eps);
    printf("%.4f",x);
    return 0;
    }

