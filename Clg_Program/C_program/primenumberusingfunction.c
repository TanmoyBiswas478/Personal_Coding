#include <stdio.h>
int checkprime(int number)
{
    if (number <= 1)
        return 0;
    for (int i = 2; i * i <= number; i++)
       {
           if (number % i == 0)
           return 0;
       }
    return 1;
}
int main()
{
    int start,end;
    printf("Enter the starting number : ");
    scanf("%d", &start);
    printf("Enter the ending number : ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++)
    {
        if (checkprime(i))
          printf("%d ", i);
    }
    printf("\n");
    return 0;
}