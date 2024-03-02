#include<stdio.h>
int main()
{
    float x,y,area,parameter;
    printf("Enter the Height of the rectangle : ");
    scanf("%f",&x);
    printf("Enter the breadth of the rectangle : ");
    scanf("%f",&y);
    area=x*y;
    parameter=2*(x+y);
    printf("The Area Of The Rectangle Is : %f\n",area);
    printf("The Perimeter Of The Rectangle Is : %f\n",parameter);
    return 0;
}