import java.util.Scanner;

public class largestamong3 
{
    public static void main(String[] args) 
    {
        Scanner kipta = new Scanner(System. in);
        int a,b,c;
        System.out.print("Enter the 1st number : ");
        a=kipta.nextInt();
        System.out.print("Enter the 2nd number : ");
        b=kipta.nextInt();
        System.out.print("Enter the 3rd number : ");
        c=kipta.nextInt();
        if(a>b && a>c)
        {
           System.out.print(a+" is the largest number among three number.");
        }
        else if (b>a && b>c) 
        {
            System.out.print(b+" is the largest number among three number.");
        }
        else
        {
            System.out.print(c+" is the largest number among three number.");
        }
        kipta.close();   
    }
}
