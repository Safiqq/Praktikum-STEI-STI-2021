
/**
 * Main.java
 * Main adalah sebuah kelas yang merupakan driver (program utama) yang menerima
 * perintah untuk melakukan kalkulasi sederhana
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Hint 1: Untuk mendapatkan input dari user, umumnya bisa dengan memasukkan
        // parameter System.in
        // ke dalam konstruktor Scanner.
        // Hint 2: Pengambilan double dari input bisa menggunakan method nextDouble()
        // dari scanner
        // Namun perlu diperhatikan bahwa nextDouble() tidak mengkonsumsi newline
        // karakter dari input
        // Sehingga apabila ingin menggunakan method nextLine() untuk mengambil String
        // setelah pemanggilan method nextDouble(), harus memanggil nextLine() dahulu
        // untuk menghabisi sisa baris input dari nextDouble().
        try {
            Calculator calc = new Calculator();
            Scanner scan = new Scanner(System.in);
            double a = scan.nextDouble();
            double b = scan.nextDouble();
            scan.nextLine();
            String op = scan.nextLine();
            System.out.println(calc.calculate(a, b, op));
            scan.close();
        } catch (InvalidDivisionByZero e) {
            System.out.println(String.format("InvalidDivisionByZero! %s", e.getMessage()));
        } catch (InvalidOperationException e) {
            System.out.println(String.format("InvalidOperationException! %s", e.getMessage()));
        } catch (Exception e) {
            System.out.println("Unknown exception!");
        } finally {
            System.out.println("Calculated.");
        }
    }

}