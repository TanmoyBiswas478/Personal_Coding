import java.util.Scanner;
public class swap 
{
  public static void main(String[] args) 
  {
    Scanner obj = new Scanner(System.in);
    int a,b,temp;
    System.out.println("Enter the 1st number : ");
    a=obj.nextInt();
    System.out.println("Enter the 2nd number : ");
    b=obj.nextInt();
    System.out.print("Before the swap 1st number : "+a);
    System.out.print("\nBefore the swap 2nd number : "+b);
    temp=a;
    a=b;
    b=temp;
    System.out.print("\nAfter the swap 1st number : "+a);
    System.out.print("\nAfter the swap 2nd number : "+b);
    obj.close();
  }    
}