#include<stdio.h>
int main()
{
    int math;
    int a,b;
    printf("enter two nos:");
    scanf("%d %d",&a,&b);
    printf("\n press 1 for addition\n");
    printf("\n press 2 for substraction\n");
    printf("\n press 3 for division\n");
    printf("\n press 4 for multiplication\n");
    printf("\nenter your choice: ");
    scanf("%d",&math);
    switch(math)
    {
        case 1:
         printf("addtion two nos:%d\n",math=a+b);
         break;
        case 2:
         printf("substraction two nos:%d\n",math=a-b);
         break;
        case 3:
         printf("division two nos:%d\n",math=a/b);
         break;
        case 4:
         printf("multiplication two nos:%d\n",math=a*b);
         break;
        default:
         printf(" Your choise is wrong ");
         break;
    }
    return 0;
}