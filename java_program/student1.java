import java.util.Scanner;
public class student1 {
  public static void main(String[] args) {
    test1 obj=new test1();
    obj.input();
    obj.display();
  }
}
class test1{
  int roll;
  String name;
  double marks;
  double subject1;
  double subject2;
  double subject3;
  //String grade;
  double total_marks;
  double avg_marks;
  
  
   public void input(){
    Scanner obj = new Scanner(System.in);
    System.out.print("Enter your Roll No:");
    roll=obj.nextInt();
    System.out.print("Enter your Name:");
    name=obj.next();
    System.out.print("Enter your 1st subject's marks:");
    subject1=obj.nextDouble();
    System.out.print("Enter your 2nd subject's marks:");
    subject2=obj.nextDouble();
    System.out.print("Enter your 3rd subject's marks:");
    subject3=obj.nextDouble();
    total_marks=subject1+subject2+subject3;
    // System.out.print("your total marks is:"+avg_marks);
    avg_marks=total_marks/3;
    // System.out.print("your average marks is:"+avg_marks);
   
    obj.close();
   }
   public void display()
   {
    System.out.println("Your Roll is:"+roll);
    System.out.println("Your Name is:"+name);
    System.out.println("Your 1st subject's marks is:"+subject1);
    System.out.println("Your 2nd subject's marks is:"+subject2);
    System.out.println("Your 3rd subject's marks is:"+subject3);
    System.out.println("Your total mark is:"+total_marks);
    System.out.println("Your avg mark is:"+avg_marks);

    if(avg_marks>100 && avg_marks<0){
      System.out.println("Invalid marks.");
    }
    else if(avg_marks<=100 && avg_marks>80){
      System.out.println("Grade A");
    }
    else if(avg_marks<=80 && avg_marks>60){
      System.out.println("Grade B.");
    }
    else if(avg_marks<=60 && avg_marks>40){
      System.out.println("Grade C");
    }
    else if(avg_marks<=40 ){
      System.out.println("Fail.");
    }

   }
}
