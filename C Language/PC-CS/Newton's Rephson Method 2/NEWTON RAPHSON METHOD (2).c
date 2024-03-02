#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float f(float x);
    float d(float y);
    float a,b,c,x,E,h;
    printf("ENTER THE ERROR VALUE : ");
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
    printf("THE ROOT IS LYING BETWEEN %f & %f\n",a,b);
    c=(a+b)/2;
    int z=1;
    printf("THE NUMBER OF ITERATION:   ");
    printf("THE VALUE OF Xn:    ");
    printf("THE VALUE OF FIRST FUNCTION:        ");
    printf("THE VALUE OF SECOND FUNCTION:           ");
    printf("THE VALUE OF H:         ");
    printf("THE VALUE OF Xn+1:\n");
    do{
        h=f(c)/d(c);
        x=c-h;
        c=x;
        printf("%d",z);
        printf("                                %f",c);
        if(f(c)<0)
        {
            printf("                  %f",f(c));
        }
        else
        {
            printf("                   %f",f(c));
        }
        if(d(c)<0)
        {
            printf("                         %f",d(c));
        }
        else
        {
            printf("                          %f",d(c));
        }
        if(h<0)
        {
            printf("                       %f",h);
        }
        else
        {
            printf("                        %f",h);
        }
        if(x<0)
        {
            printf("                   %f\n",x);
        }
        else
        {
            printf("                    %f\n",x);
        }
        z++;
    }while(fabs(h)>E);
    printf("THE FINAL VALUE OF ROOT IS : %f",x);
}

float f(float z)
{
    return(pow(z,4)-12);
}
float d(float y)
{
    return(4*pow(y,3));
}
