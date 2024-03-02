#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
  float f(float x);
  float a,b,c;
  printf("Enter the error value : ");
  scanf("%f",&E);
  for(int i=0;i<=10;i++)
{
      if(f(i)*f(i+1)<0)
      {
          a=i;
          b=i+1;
          break;
      }
}
      printf("The root is lying between %f & %f\n",a,b);
      c=b-((b-a)*f(a+b)/2;
      printf("The  number of iteration:   ");
      printf("The  value of Xn:    ");
      printf("The  value of First function:   ");
      printf("The  value of Second function:   ");
      printf("The  value of H:");
      printf("The  value of xn+1:\n  ")
do
  {
      h=f(c)/d(c);
      x=c-h;
      c=x;
      printf("%d    ",z);
      printf("%f    ",c);
      printf("%f    ",f(c);
      printf("%f    ",d(c);
      printf("%f    ",h);
      printf("%f

  }
  while(fabs(h)>E);
    printf("the final value of root is : %f",x);
}
float f(float z)
{
    return(pow(z,4)-12);
}
float d(float y)
{
    return(4*pow(y,3));
}
