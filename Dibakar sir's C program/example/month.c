#include<stdio.h>
int main()
{
    int month;
    printf("\n press 1 for January\n");
    printf("\n press 2 for February\n");
    printf("\n press 3 for March\n");
    printf("\n press 4 for April\n");
    printf("\n press 5 for May\n");
    printf("\n press 6 for June\n");
    printf("\n press 7 for July\n");
    printf("\n press 8 for August\n");
    printf("\n press 9 for September\n");
    printf("\n press 10 for October\n");
    printf("\n press 11 for November\n");
    printf("\n press 12 for December\n");
    printf("enter your choice: ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
         printf("this month is:January\n");
         break;
        case 2:
         printf("this month is:February\n");
         break;
        case 3:
         printf("this month is:March\n");
         break;
        case 4:
         printf("this month is:April\n");
         break;
        case 5:
         printf("this month is:May\n");
         break;
        case 6:
         printf("this month is:June\n");
        break;
        case 7:
         printf("this month is:July\n");
         break;
        case 8:
         printf("this month is:August\n");
         break;
        case 9:
         printf("this month is:September\n");
         break;
        case 10:
         printf("this month is:October\n");
         break;
        case 11:
         printf("this month is:November\n");
         break;
        case 12:
         printf("this month is:December\n");
         break;
        default:
         printf("\n wrong choice.");
    }
    return 0;
}