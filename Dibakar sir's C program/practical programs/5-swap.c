int main()
{
    float x,y,z;
    printf("Enter the first number before swaping x = ");
    scanf("%f",&x);
    printf("Enter the second number before swaping y = ");
    scanf("%f",&y);
    printf("before swaping \nx=%f\ny=%f\n",x,y);
    z=x;
    x=y;
    y=z;
    printf("after swaping \nx=%f\ny=%f",x,y);
    return 0;
}