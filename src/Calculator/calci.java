package Calculator;

import java.text.NumberFormat;
import java.util.Scanner;

public class calci {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Principal : ");
        float principal = scan.nextFloat();
        System.out.print("Annual Interest Rate : ");
        float interest = scan.nextFloat();
        System.out.print("Period (Years) : ");
        float years = scan.nextFloat();
        interest /= (1200);
        years *= 12;
        interest++;
        float mort;
        mort = (float) ((interest-1)*(Math.pow((interest),years)));
        mort = (float) ((principal*mort)/((Math.pow((interest),years)-1)));

        System.out.println("Mortgage : " + NumberFormat.getCurrencyInstance().format(mort));
    }
}
