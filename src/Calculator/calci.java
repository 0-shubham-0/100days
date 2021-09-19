package Calculator;
// calculator for to calculate Mortgage

import java.text.NumberFormat;
import java.util.Scanner;

public class calci {
    public static void main(String[] args){
        int principal;
        Scanner scan = new Scanner(System.in);
            while(true) {
                System.out.print("Principal : ");
                while (!scan.hasNextInt()) {//checks if input is numerical
                    scan.next();
                    System.out.println("only enter numbers");
                }
                principal = scan.nextInt();
                if(principal<10_000_000&&principal>1000)
                    break;
                else
                    System.out.println("Enter value between 1000 and 10,000,000");
            }
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
