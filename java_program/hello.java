public class hello {
    public void display(int num) {
        System.out.println("Method with integer parameter: " + num);
    }
    public void display(double num) {
        System.out.println("Method with double parameter: " + num);
    }
    public static void main(String[] args) {
        hello obj = new hello();
        obj.display(10);
        obj.display(10.5);
    }
}