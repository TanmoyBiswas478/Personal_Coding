#include<stdio.h>
int main()
{
    int radius;
	float area;
	printf("\nEnter the radius of Circle : ");
	scanf("%d", &radius);
	area = 3.14 * radius * radius;
	printf("\nArea of Circle : %f", area);
	return 0;
}
