import java.util.Arrays;

public class array {

    public static void main(String[] args) {
        int[] number = new int[5];
        number[0]=1;
        number[1]=3;
        System.out.println("address is" + number);
        System.out.println("array is " + Arrays.toString(number));
        int[] num={1,2,3,6,7,1,5};
        System.out.println(num.length);
        System.out.println(Arrays.toString(num));
        Arrays.sort(num);
        System.out.println(Arrays.toString(num));

        //matrix

        int[][] num1 = new int[2][3];
        num1[0][0] = 1;

        // for matrix to string doesn't work
        System.out.println(Arrays.deepToString(num1));
        int[][] num2 = {{1,2,3,},{2,3,4}};
        System.out.println(Arrays.deepToString(num2));

    }
}
