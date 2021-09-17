import java.util.Arrays;

public class array {

    public static void main(String[] args) {
        int[] number = new int[5];
        number[0]=1;
        number[1]=3;
        System.out.println("address is" + number);
        System.out.println("array is " + Arrays.toString(number));
        int[] num={1,2,3,4,5};
        System.out.println(num.length);

    }
}
