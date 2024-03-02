#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#define pi 3.141592
float f(float x)
{
    float z;
    z=x*tan(x)-1.28;
    return z;
}
void main()
{
    int count=1,n;
    float a,b,m;
    clrscr();
    printf("Enter the intervals of A & B :- ");
    scanf("%f%f",&a,&b);
    printf("Number of Iteration.");
    scanf("%d",&n);
    if(f(a)*f(b)<0);
    {
        m=(a+b)/2;
        while(count<=n)
        {
            if(f(a)*f(m)<0)
            {
                b=m;
            }
            else
            {
                a=m;
            }
            count++;
            m=(a+b)/2;
        }
        printf("Answer is : %f",m);
    }
    getch();
}
