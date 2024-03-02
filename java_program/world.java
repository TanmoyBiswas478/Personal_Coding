import java.util.Scanner;
class world {
public static void main(String args[])
{
int number;
int reversed_number;
Scanner reverse = new Scanner(System.in);
System.out.print("Enter a number : ");
number = reverse.nextInt();
reversed_number = reverseNumber(number);
System.out.print("Reversed Number :" +reversed_number);
reverse.close();
}
  public static int reverseNumber(int num)
  {
    int reversed = 0;
    while( num != 0 )
    {
        int digit = num % 10;
        reversed = (reversed * 10)+digit;
        num/=10;
    }
    return reversed;
  }
}
