/**
 * Main.java
 * Main merupakan sebuah kelas yang mengembalikan hasil perkalian dari angka 2
 * dengan angka dari input
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Integer num = scan.nextInt();
        System.out.println(num * 2);
        scan.close();
    }
}
