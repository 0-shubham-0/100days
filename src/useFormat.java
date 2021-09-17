import java.text.NumberFormat;

public class useFormat {
    public static void main(String[] args){

        NumberFormat cur = NumberFormat.getCurrencyInstance();
        double y = 5232352;
        System.out.println(cur.format(y));
        float p = 6.7f;
        System.out.println(NumberFormat.getPercentInstance().format(p));

    }

}