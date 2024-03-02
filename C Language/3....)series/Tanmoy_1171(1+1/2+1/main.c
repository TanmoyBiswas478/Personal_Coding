#include <stdio.h>
#include <stdlib.h>

float main()
{
    float i,sum=0.0;
    int n;
    printf("Input any Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     sum = sum + (1.0/i);
    }
    printf("sum = %f",sum);
    return 0;
}
