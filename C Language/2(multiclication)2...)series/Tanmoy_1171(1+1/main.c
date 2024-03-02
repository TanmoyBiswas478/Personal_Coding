#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j,k;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
       {
        for(j=1;j<=(i-1);j++)
           {
            printf(" ");
           }
        for(k=n;k>=i;k--)
           {
            printf("*");
           }
    printf("\n");
       }
         return 0;
}
