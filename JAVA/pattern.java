import java.util.*;

public class pattern {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of n :");
        int n = sc.nextInt();
        System.out.println("Enter the value of m :");
        int m = sc.nextInt();

        // // Type 1

        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= m; j++) {
        //         System.out.print("* ");
        //     }
        //     System.out.println();
        // }

        // // Type 2

        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= m; j++) {
        //         if(i==1 || j==1 || i==n || j==m)
        //             System.out.print("* ");
        //         else
        //             System.out.print("  ");
        //     }
        //     System.out.println();
        // }

        // // Type 3

        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= i; j++) {
        //         System.out.print("* ");
        //     }
        //     System.out.println();
        // }

        // // Type 4

        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n-i; j++) {
        //         System.out.print("* ");
        //     }
        //     System.out.println();
        // }

        // // Type 5

        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= m; j++) {
        //         if (j <= n - i)
        //             System.out.print("  ");
        //         else
        //             System.out.print("* ");
        //     }
        //     System.out.println();
        // }

        // // Type 6

        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= i; j++) {
        //         System.out.print(j);
        //         System.out.print(" ");
        //     }
        //         System.out.println();
        // }

        // // Type 7

        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= n - i + 1; j++) {
        //         System.out.print(j + " ");
        //     }
        //     System.out.println();
        // }

        // // Type 8
        // int a = 1;
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= i; j++) {
        //         System.out.print(a + " ");
        //         a++;
        //     }
        //     System.out.println();
        // } 

        // // Type 9

        //  // long mine
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= i; j++) {
        //         if (i % 2 == 0) {
        //             if (j % 2 == 0)
        //                 System.out.print("1 ");
        //             else
        //                 System.out.print("0 ");

        //         }
        //         else {
        //             if (j % 2 == 0)
        //                 System.out.print("0 ");
        //             else
        //                 System.out.print("1 ");
        //         }

        //     }
        //     System.out.println();
        // } 

        // // short ans

        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= i; j++) {
        //         if ((i + j) % 2 == 0)
        //             System.out.print("1 ");
        //         else
        //             System.out.print("0 ");

        //     }
        //     System.out.println();
        // }

       
    }
}
