package Calculator;

import java.text.NumberFormat;
import java.util.Scanner;

public class calci {
    public static void main(String[] args){
        int principal;
        Scanner scan = new Scanner(System.in);
            do {
                System.out.print("Principal : ");
                scan.next();
                System.out.println("\nEnter valid input");
            } while (!scan.hasNextInt());
            principal = scan.nextInt();
        System.out.print("Annual Interest Rate : ");
        float interest = scan.nextFloat();
        System.out.print("Period (Years) : ");
        int years = scan.nextInt();
        interest /= (1200);
        years *= 12;
        interest++;
        float mort;
        mort = (float) ((interest-1)*(Math.pow((interest),years)));
        mort = (float) ((principal*mort)/((Math.pow((interest),years)-1)));

        System.out.println("Mortgage : " + NumberFormat.getCurrencyInstance().format(mort));
    }
}
