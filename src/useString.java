public class useString {
    public static void main(String[] args) {
        String name1 = "Its a name haha";
        String name2 = "another name";
        String name3 = name1 + " and " + name2;
        System.out.println(name1);
        System.out.println(name3);
        //charAt
        System.out.println(name1.charAt(2));

        //length
        System.out.println(name2.length());


        System.out.println(name3.toLowerCase());
        System.out.println(name3.replace("haha","hh"));
        System.out.println(name3.substring(10, 15));

        String ho = "YEs and nO";



    }
}
