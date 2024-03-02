#include <stdio.h>
#include <string.h>
int main() 
{
    char bird[20];
    printf("Enter the bird: ");
    scanf("%s",bird);
    if (strcmp(bird,"peacock") == 0)
    {
        printf("It is The Indian National Bird.\n");
    } 
    else {
        printf("It is not the Indian National Bird.\n");
    }
    return 0;
}