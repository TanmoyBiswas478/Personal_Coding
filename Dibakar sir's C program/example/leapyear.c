#include<stdio.h>
int main()
{
    int bird,peacock;
    printf("Enter the bird : ");
    scanf("%d",&bird);
    if(bird==peacock)
    {
        printf("The inputted bird is Indian National Bird.",bird);
    }
    else
    {
        printf("The inputted bird is not the Indian National Bird.",bird);
    }
    return 0;
}