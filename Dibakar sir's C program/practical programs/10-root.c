#include<stdio.h>
int main()
{
    float x,z;
    printf("Enter any number : ");
    scanf("%f",&x);
    //z=x*x;
    //z=x*x*x;
    //z=sqrt(x);
    printf(" The result is %f\n",z=x*x);
    printf(" The result is %f\n",z=x*x*x);
    printf(" The result is %f\n",z=sqrt(x));
    return 0;
}