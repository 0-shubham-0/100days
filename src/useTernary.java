import java.util.Scanner;

public class useTernary {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter temp : ");
        float temp = scan.nextFloat();
        String condition = (temp<40&&temp>10) ? "Optimal": "Not Optimal";
        System.out.println(condition);
    }
}
