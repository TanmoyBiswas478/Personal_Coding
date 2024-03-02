#include <stdio.h>
#include <string.h>
int main() 
{
    char astronauts[20];
    printf("Enter the astronauts : ");
    scanf("%s",astronauts);
    if (strcmp(astronauts,"Nealarmstrong") == 0)
    {
        printf("He is the 1st person who was travelled to moon.\n");
    } 
    else {
        printf("He is not the 1st person who was travelled to moon.\n");
    }
    return 0;
}