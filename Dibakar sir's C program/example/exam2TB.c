#include<stdio.h>
int main()
{
    char x[50],y[50],z[100],v[100],g[100];
    char b[100],c[100],d[100],e[100],f[100];
    int password;
    b[100]='a';
    c[100]='b';
    e[100]='c';
    d[100]='d';
    f[100]='a';
    printf("what is the national bird of 'INDIA'?\n");
    printf("\n press a for Peacock\n");
    printf("\n press b for Hen\n");
    printf("\n press c for Hargila\n");
    printf("\n press d for Parrot\n");
    printf("\nSelect your choice : ");
    scanf("%s",&x[50]);
    switch (x[50])
    {
    case 'a':
    printf("right answer.\n");
    break;
    case 'b':
    printf("wrong answer.\n");
    break;
    case 'c':
    printf("wrong answer.\n");
    break;
    case 'd':
    printf("wrong answer.\n");
    break;
    default:
    printf("invalid answer.\n");
    break;
    }
    printf("what is the colour of sky?\n");
    printf("\n press a for Red\n");
    printf("\n press b for Blue\n");
    printf("\n press c for Yellow\n");
    printf("\n press d for Green\n");
    printf("\nSelect your choice : ");
    scanf("%s",&y[50]);
    switch (y[50])
    {
    case 'a':
    printf("wrong answer.\n");
    break;
    case 'b':
    printf("Right answer.\n");
    break;
    case 'c':
    printf("wrong answer.\n");
    break;
    case 'd':
    printf("wrong answer.\n");
    break;
    default:
    printf("invalid answer.\n");
    break;
    }
    printf("what is the colour of sea?\n");
    printf("\n press a for Red\n");
    printf("\n press b for Green\n");
    printf("\n press c for Yellow\n");
    printf("\n press d for Blue\n");
    printf("\nSelect your choice : ");
    scanf("%s",&z[100]);
    switch (z[100])
    {
    case 'a':
    printf("wrong answer.\n");
    break;
    case 'b':
    printf("wrong answer.\n");
    break;
    case 'c':
    printf("wrong answer.\n");
    break;
    case 'd':
    printf("Right answer.\n");
    break;
    default:
    printf("invalid answer.\n");
    break;
    }
    printf("what is the national language of 'INDIA'?\n");
    printf("\n press a for Telugu\n");
    printf("\n press b for Bengali\n");
    printf("\n press c for Hindi\n");
    printf("\n press d for Tamil\n");
    printf("\nSelect your choice : ");
    scanf("%s",&v[100]);
    switch (v[100])
    {
    case 'a':
    printf("wrong answer.\n");
    break;
    case 'b':
    printf("wrong answer.\n");
    break;
    case 'c':
    printf("Right answer.\n");
    break;
    case 'd':
    printf("wrong answer.\n");
    break;
    default:
    printf("invalid answer.\n");
    break;
    }
    printf("what is the name of cricket board of 'INDIA'?\n");
    printf("\n press a for BOARD OF CRICKET COUNCIL\n");
    printf("\n press b for BOARD OF COUNCIL CRICKET\n");
    printf("\n press c for CRICKET OF BOARD COUNCIL\n");
    printf("\n press d for COUNCIL OF CRICKET BOARD\n");
    printf("\nSelect your choice : ");
    scanf("%s",&g[100]);
    switch (g[100])
    {
    case 'a':
    printf("Right answer.\n");
    break;
    case 'b':
    printf("wrong answer.\n");
    break;
    case 'c':
    printf("wrong answer.\n");
    break;
    case 'd':
    printf("wrong answer.\n");
    break;
    default:
    printf("invalid answer.\n");
    break;
    }
    printf("Enter your password : ");
    scanf("%d",&password);
    if(password == 12345)
    {
      if (x[50]==b[100])
      {
       printf("\nMarks Obtained 2.");
      }
      else
      {
         printf("\nMarks Obtained 0.");
      }
    }
    else
    {
      printf("\nNot Permitted");
    }
    if(password == 12345)
    {
      if (y[50]==c[100])
      {
       printf("\nMarks Obtained 2.");
      }
      else
      {
         printf("\nMarks Obtained 0.");
      }
    }
    else
    {
      printf("\nNot Permitted");
    }
    if(password == 12345)
    {
      if (z[100]==d[100])
      {
       printf("\nMarks Obtained 2.");
      }
      else
      {
         printf("\nMarks Obtained 0.");
      }
    }
    else
    {
      printf("\nNot Permitted");
    }
     if(password == 12345)
    {
      if (v[100]==e[100])
      {
       printf("\nMarks Obtained 2.");
      }
      else
      {
         printf("\nMarks Obtained 0.");
      }
    }
    else
    {
      printf("\nNot Permitted");
    }
    if(password == 12345)
    {
      if (g[100]==f[100])
      {
       printf("\nMarks Obtained 2.");
      }
      else
      {
         printf("\nMarks Obtained 0.");
      }
    }
    else
    {
      printf("\nNot Permitted");
    }  
    return 0;
}