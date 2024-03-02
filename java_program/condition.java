import java.util.Scanner;
public class condition
{
    public static void main(String[] args) 
    {
        int age;
        System.out.print("Enter your name : ");
        Scanner obj = new Scanner(System.in);
        String S1=obj.next();
        System.out.print("Enter the age : ");
        Scanner obj1 = new Scanner(System.in);
        String S2=obj1.next();
        age=Integer.parseInt(S2);
        if(age>=18){
            System.out.println("Hurrah!!! Welcome "+S1+" to your new journey.\nYou are approved for drive a car.");
        }
        else{
            System.out.println("Sorry! \nYou are not approved for drive a car.");
        }
        obj.close();
        obj1.close();
    }
}
