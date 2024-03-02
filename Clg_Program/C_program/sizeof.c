#include <stdio.h>
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));
    return 0;
}
