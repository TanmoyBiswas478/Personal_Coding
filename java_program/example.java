import java.util.Scanner;
public class example {
    public static void main(String[] args){
        // test2 obj=new test2();
    }
}
class test2 {
    int a,b;
    public void input(){
        Scanner math = new Scanner(System.in);
        System.out.print("Enter your 1st number : ");
        a=math.nextInt();
        System.out.print("Enter your 2nd number : ");
        b=math.nextInt();
        math.close();
    }
}
