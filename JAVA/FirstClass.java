import java.util.*;

class FirstClass {
    public static void main(String args[]) {
        // System.out.println("Hello World\n");

        // variable
        // String name = "callMe SK";
        // int age = 25;
        // double weight = 78.55;

        // System.out.println(name);
        // System.out.println(age);
        // System.out.println(weight);

        // Scanner sc = new Scanner(System.in);
        // String name = sc.nextLine(); //nextInt(); nextFloat();
        // System.out.println(name);

        // Scanner sc = new Scanner(System.in);
        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // System.out.println(a + b);

        // // Table code
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        System.out.println("The table of given numner :");
        for (int i = 1; i <= 10; i++) {
            System.out.println(i * x);
        }
        
    }
}