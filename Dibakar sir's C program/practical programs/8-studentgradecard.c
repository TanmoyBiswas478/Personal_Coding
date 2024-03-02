#include<stdio.h>
int main(){
    char name[50];
    int rollno,marks,grade;
    printf("enter your name :");
    scanf("%s",&name);
    printf("enter your roll no :");
    scanf("%d",&rollno);
    printf("enter your marks :");
    scanf("%d",&marks);
    if(marks>=80 && marks<=100){
        printf("%s your grade is A\n",name);
    }
    else if(marks>=50 && marks<=79 ){
        printf("%s your grade is B\n",name);
    }
    else if(marks>=20 && marks<=49 ){
        printf("%s your grade is C\n",name);
    }
    else{
        printf("%s you are fail.\n",name);
    }
    return 0;
}