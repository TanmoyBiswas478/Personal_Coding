import java.util.Scanner;
public class circle {
    public static void main(String[] args) 
    {
        Scanner hi = new Scanner(System.in);
        int r;
        double area,parameter;
        System.out.print("Enter the redius of the circle : ");
        r=hi.nextInt();
        area = 3.14*r*r;
        parameter = 2*3.14*r;
        System.out.println("The area of the circle for the radius "+r+" is : "+area);
        System.out.println("\nThe parameter of the circle for the radius "+r+" is : "+parameter);
        hi.close();
    }
}
