import java.util.Scanner;
public class employee {
  public static void main(String[] args) {
    test1 obj=new test1();
    obj.input();
    obj.display();
  }
}
class test1{
  String name;
  int basics;
  int hra;
  int da;
  int Total;
  
  
  
   public void input(){
    Scanner obj = new Scanner(System.in);
    System.out.print("Enter your Name : ");
    name=obj.next();
    System.out.print("Enter your Basic salary : ");
    basics =obj.nextInt();
    hra=(basics*15)/100;
    da=(basics*10)/100;
    Total=basics+hra+da;
    
   
    obj.close();
   }
   public void display()
   {
    System.out.println("Your Name is : "+name);
    System.out.println("Basic salary is : "+basics );
    System.out.println("H.R.A is : "+hra);
    System.out.println("D.A is : "+da);
    System.out.println("Total Salary is : "+Total);
   }
}