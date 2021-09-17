public class useMathClass {
    public static void main(String[] args){
        final float pi=3.14f;
        String x = "45";
        int y = Integer.parseInt(x);
        System.out.println(y + pi);
        int d = Math.round(1.1f);
        System.out.println(d);
        int c = (int)Math.ceil(1.1);
        System.out.println(c);
        int a = (int)Math.floor(6.1);
        System.out.println(a);
        System.out.println(Math.max(a,c));
        System.out.println(Math.min(a,c));
        System.out.println((int)(Math.random()*100));
    }
}
