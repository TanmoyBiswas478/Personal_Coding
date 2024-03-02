#include<stdio.h>
int main()
{
    char b = 'a';
    char c,d,e;
    char x;
    printf("what is the national bird of 'INDIA'?\n",x);
    printf("\n press a for Peacock\n",b);
    printf("\n press b for Hen\n",c);
    printf("\n press c for Hargila\n",d);
    printf("\n press d for parrot\n",e);
    printf("\nSelect your choice : ");
    scanf("%c",&x);
    switch (x)
    {
    case 'a':
    printf("right answer.\n",b);
    break;
    case 'b':
    printf("wrong answer.\n",c);
    break;
    case 'c':
    printf("wrong answer.\n",d);
    break;
    case 'd':
    printf("wrong answer.\n",e);
    break;
    default:
    printf("invalid answer.\n");
    break;
    }
    if (x==b)
    {
       printf("\nMarks Obtained 2.");
    }
    else
    {
       printf("\nMarks Obtained 0.");
    }
    return 0;
}