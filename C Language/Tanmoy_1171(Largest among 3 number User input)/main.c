#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter a number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("Largest %d",a);
    else if(b>a&&b>c)
        printf("Largest %d",b);
    else
        printf("Largest %d",c);
    return 0;
}
