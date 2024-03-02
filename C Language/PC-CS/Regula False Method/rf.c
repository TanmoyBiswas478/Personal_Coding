#include<stdio.h>
#include<math.h>
float f(float y)
{
    return(y*y*y+2*y-2);
}
int main()
{
    float a,b,c,err,h,x;
    int i,n=1;
    printf("ENTER THE VALUE OF ERROR: ");
    scanf("%f",&err);
    for( i=0;;i++)
    {
        if (f(i)*f(i+1)<0)
        {
            a=i;
            b=i+1;
            break;
        }
    }
    printf("The root is lying between %f and %f\n",a,b);
    printf("\nn \t  an \t\t   bn \t\t f(an) \t\t f(bn) \t\t hn \t\t xn+1 ");
    do
    {
        float temp1=f(a),temp2=f(b),temp3=f(c);
        x=c;
        c=b-((b-a)*temp2)/(temp2-temp1);
        if(temp1*temp3<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
        printf("\n%d\t%f\t%f\t%f\t%f\t%f\t%f",n++,a,b,temp1,temp2,x,c);
    }
    while(fabs(x-c)>err);
    printf("\nThe value of x is : %.3f",c);
}


