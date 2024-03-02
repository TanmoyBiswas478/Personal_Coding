#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
        printf("Upper");
    else if(ch>=97&&ch<=122)
        printf("Lower");
    else if(ch>=48&&ch<=57)
        printf("Digit");
    else
    printf("Special symbol");
    return 0;
}
