#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    char y = 'a';
    x=x+y;//y is implicity connected to int
    float z = x + 1.0;//x is implicity connected to float
    printf("x=%d z=%f,x,z");
    return 0;
}
