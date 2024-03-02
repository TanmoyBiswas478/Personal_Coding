import java.util.Scanner;
public class fact 
{
  public static void main(String[] args) 
  {
    Scanner obj = new Scanner(System.in);
    int fact,i,n;
    System.out.print("Enter the value of n : ");
    // String S1 = obj.next();
    // n=Integer.parseInt(S1);
    n=obj.nextInt();
    obj.close();
    fact = 1;
    for(i=1;i<=n;i++)
    {
      fact = fact*i;
    }
    System.out.print("The result is : "+fact);
  }    
}