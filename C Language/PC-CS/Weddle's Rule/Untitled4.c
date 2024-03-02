
#include<stdio.h>
#include<math.h>


float func(float x)
{
    float y=(x*tan(x)-1.28);
    return y;

}
    float sign (float x,float y)
    {
    float z= func(x)*func(y);
    return z;
    }
    int main()
    {
        float a,b,x,c,eps=0.0001;
        int i;
    for(i=0;i<100;i++)
    {
        if(func(i)*func(i+1)<0.0)
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
        if(x<0.0)
            a=x;
        else
            b=x;

    }while(fabs(x-c)>eps);
    printf("%.4f",fabs(x-c));
    return 0;
    }

