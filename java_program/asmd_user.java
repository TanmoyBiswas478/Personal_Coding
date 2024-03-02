import java.util.Scanner;
public class asmd_user 
{
  public static void main(String[] args) 
  {
    int a,b,c;
    Scanner hello = new Scanner(System.in);
    System.out.print("Enter the value of 1st number : ");
    a=hello.nextInt();
    System.out.print("Enter the value of 2nd number : ");
    b=hello.nextInt();
    c=a+b;
    System.out.print("Addition of "+a+"&"+b+"="+c);
    c=a-b;
    System.out.print("\nSubstraction of "+a+" & "+b+" = "+c);
    c=a*b;
    System.out.print("\nMultiplication of "+a+" & "+b+" = "+c);
    c=a/b;
    System.out.print("\nDivision of "+a+" & "+b+" = "+c);
    hello.close();
  }    
}
