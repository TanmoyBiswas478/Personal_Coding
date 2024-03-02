#include<stdio.h>
#include<math.h>

float func(float x)
{
    float y;
    y=1/(1+pow(x,2));
    return y;
}
int main()
{
    float a,b,h,s=0.0;
    int n,i;
    printf("enter the value of a : ");
    scanf("%f",&a);
    printf("enter the value of b : ");
    scanf("%f",&b);
    printf("enter the value of n : ");
    scanf("%d",&n);
    if(n%6!=0){
        printf("enter interval in multiple of 6");
        return main();
    }
    h=(b-a)/n;
    s=func(a)+func(b);
    for(i=1;i<=n-1;i++)
    {
        if(i%6==0)
        {
         s = s+2*func(a+i*h);
        }
        else if(i%3==0)
        {
            s = s+6*(func(a+i*h));
        }
          else if(i%2==0)
        {
            s = s+func(a+i*h);
        }
        else
            s=s+5*func(a+i*h);
    }
  s=(((3*h)/10)*s)*4;
    printf("The output is :%f",s);
    return 0;
}
