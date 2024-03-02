#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Before swapping: Number(1) = %d, Number(2) = %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping: Number(1) = %d, Number(2) = %d\n", a, b);
    return 0;
}
