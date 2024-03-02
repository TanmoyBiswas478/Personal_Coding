#include <stdio.h>
#define PI 3.14

int main()
{
    int radius;
    float area;
    printf("enter the radius ");
    scanf("%d",&radius);
    area = PI*radius*radius;
    printf("area is %f",area);
    return 0;
}
