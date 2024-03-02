#include<stdio.h>
int main(){
    char name[50];
    int basic,hra,da,Total;
    printf("enter your name :");
    scanf("%s",&name);
    printf("enter your Basic salary : ");
    scanf("%d",&basic);
    hra=(basic*15)/100;
    printf("%s your HRA is %d \n",name,hra);
    da=(basic*10)/100;
    printf("%s your DA is %d \n",name,da);
    Total=basic+hra+da;
    printf("%s your total Salary is %d \n",name,Total);
    return 0;
}