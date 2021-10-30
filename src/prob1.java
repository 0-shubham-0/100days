import java.util.Scanner;

public class prob1 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter length of Array ");
        int n=(int)sc.nextDouble();
        int[] a=new int[n];
        System.out.println("Enter array elements");
        for (int i = 0; i <n ; i++) {
            a[i]=sc.nextInt();
        }
        System.out.println("Enter target");
        int target= sc.nextInt();
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if (a[i]+a[j]==target){
                    System.out.println("["+i+","+j+"]");
                    break;
                }
            }
        }
    }

}
