#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf(" you are eligible for vote because you are %d+ years old .",age);
    }
    else
    {
        printf(" you are not eligible for vote because you are %d years old .",age);
    }
}