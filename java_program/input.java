import java.util.Scanner;
public class input {
    public static void main(String args[]){
        int a,b,c,d;
        Scanner obj=new Scanner(System.in);
        System.out.print("Enter 1st no:");
        String s1=obj.next();
        a=Integer.parseInt(s1);
        System.out.print("Enter 2nd no:");
        String s2=obj.next();
        b=Integer.parseInt(s2);
        System.out.print("Enter 3rd no:");
        String s3=obj.next();
        c=Integer.parseInt(s3);
        d=a+b+c;
        System.out.print("Addition of "+a+" ,"+b+" & "+c+" = "+d);
        obj.close();
    }
}