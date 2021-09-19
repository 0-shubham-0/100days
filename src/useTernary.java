import java.util.Scanner;

public class useTernary {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter temp : ");
        float temp = scan.nextFloat();
        String condition = (temp<40&&temp>10) ? "Optimal": "Not Optimal";
        System.out.println(condition);
        System.out.print("num:" );
        float num= scan.nextFloat();
        if (num%5==0)
            System.out.print("buss");
        if (num%3==0)
            System.out.print("fiss");
        else
            System.out.println(num);
    }
}
