#include<stdio.h>
int main()
{
    char A[50]="Q.1.Which one is the smallest ocean in the World?";
    printf("%s",A);
    printf("\nOptions:---");
    char a[20]="1.Indian",b[20]="2.Pacific",c[20]="3.Atlantic",d[20]="4.Arctic";
    printf("\n%s       %s\n%s        %s\n",a,b,c,d);
    d[20]='d';
    printf("\n press a for Option 1");
    printf("\n press b for Option 2");
    printf("\n press c for Option 3");
    printf("\n press d for Option 4\n");
    printf("\nSelect your choice : ");
    scanf("%s",&A[50]);
    switch (A[50])
    {
    case 'a':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",a,d);
        break;
    case 'b':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",b,d);
        break;
    case 'c':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",c,d);
        break;
    case 'd':
        printf("your answer is correct.\n%s\n",d);
        break;
    default:
        printf("invalid.");
        break;
    }




    char B[60]="Q.2.Which country is known as the playground of Europe?";
    printf("\n%s",B);
    printf("\nOptions:---");
    char e[20]="1.Austria",f[20]="2.Holland",g[20]="3.Switzerland",h[20]="4.Italy";
    printf("\n%s       %s\n%s        %s\n",e,f,g,h);
    g[20]='c';
    printf("\n press a for Option 1");
    printf("\n press b for Option 2");
    printf("\n press c for Option 3");
    printf("\n press d for Option 4");
    printf("\nSelect your choice : ");
    scanf("%s",&B[60]);
    switch (B[60])
    {
    case 'a':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",e,g);
        break;
    case 'b':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",f,g);
        break;
    case 'c':
        printf("your answer is correct.\n%s",g);
        break;
    case 'd':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",h,g);
        break;
    default:
        printf("invalid.");
        break;
    }





    char C[90]="Q.3.Which country is also known as the Land of Rising Sun?";
    printf("\n%s",C);
    printf("\nOptions:---");
    char i[30]="1.Japan",j[30]="2.New Zealand",k[30]="3.Fiji",l[30]="4.China";
    printf("\n%s       %s\n%s       %s\n",i,j,k,l);
    i[30]='a';
    printf("\n press a for Option 1");
    printf("\n press b for Option 2");
    printf("\n press c for Option 3");
    printf("\n press d for Option 4");
    printf("\nSelect your choice : ");
    scanf("%s",&C[90]);
    switch (C[90])
    {
    case 'a':
        printf("your answer is correct.\n%s",i);
        break;
    case 'b':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",j,i);
        break;
    case 'c':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",k,i);
        break;
    case 'd':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",l,i);
        break;
    default:
        printf("invalid.");
        break;
    }





    char D[100]="Q.4.Which continent has the highest number of countries?";
    printf("\n%s",D);
    printf("\nOptions:---");
    char m[40]="1.Asia",n[40]="2.Europe",o[40]="3.North America",p[40]="4.Africa";
    printf("\n%s       %s\n%s       %s\n",m,n,o,p);
    p[40]='d';
    printf("\n press a for Option 1");
    printf("\n press b for Option 2");
    printf("\n press c for Option 3");
    printf("\n press d for Option 4");
    printf("\nSelect your choice : ");
    scanf("%s",&D[100]);
    switch (D[100])
    {
    case 'a':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",m,p);
        break;
    case 'b':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",n,p);
        break;
    case 'c':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",o,p);
        break;
    case 'd':
        printf("your answer is correct.\n%s",p);
        break;
    default:
        printf("invalid.");
        break;
    }






    char E[70]="Q.5.In which country, white elephant is found?";
    printf("\n%s",E);
    printf("\nOptions:---");
    char q[50]="1.India",r[50]="2.Sri Lanka",s[50]="3.Thailand",t[50]="4.Malaysia";  
    printf("\n%s       %s\n%s        %s\n",q,r,s,t);  
    s[50]='c';
    printf("\n press a for Option 1");
    printf("\n press b for Option 2");
    printf("\n press c for Option 3");
    printf("\n press d for Option 4");
    printf("\nSelect your choice : ");
    scanf("%s",&E[70]);
    switch (E[70])
    {
    case 'a':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",q,s);
        break;
    case 'b':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",r,s);
        break;
    case 'c':
        printf("your answer is correct.\n%s",s);
        break;
    case 'd':
        printf("Your answer ( %s ) is wrong.\nCorrect is:%s",t,s);
        break;
    default:
        printf("invalid.");
        break;
    }

    int password;
    printf("\nEnter password:");
    scanf("%d",&password);
    if (password==987)
    {
        if (A[50==d[20]])
        {
            printf("You got 2 marks.\n");
        }
        else
        {
            printf("You got 0.\n");
        }
        
    }
     else{
        printf("\nWrong password");
    }
    

    if (password==987)
    {
        if (B[60]=g[20])
        {
            printf("You got 2 marks.\n");
        }
        else
        {
            printf("You got 0.\n");
        }
        
    }
     else{
        printf("\nWrong password");
    }
    

    if (password==987)
    {
        if (C[90]=i[30])
        {
            printf("You got 2 marks.\n");
        }
        else
        {
            printf("You got 0.\n");
        }
        
    }
    else{
        printf("\nWrong password");
    }
    

    if (password==987)
    {
        if (D[100]=p[40])
        {
            printf("You got 2 marks.\n");
        }
        else
        {
            printf("You got 0.\n");
        }
        
    }
     else{
        printf("\nWrong password");
    }
    

    if (password==987)
    {
        if (E[70]=s[50])
        {
            printf("You got 2 marks.\n");
        }
        else
        {
            printf("You got 0.\n");
        }
        
    }
     else{
        printf("\nWrong password");
    }
    

    

    return 0;
}