import java.util.Scanner;

public class io {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("your name: ");
        String name = scan.nextLine().trim();
        System.out.print("Your age: ");
        double age = scan.nextDouble();

        System.out.println("Name is "+ name);
        System.out.println(" Age is "+ age);
    }
}
