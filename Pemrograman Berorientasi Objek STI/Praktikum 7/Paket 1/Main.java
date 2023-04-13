
/**
 * Main.java
 * Main adalah sebuah kelas yang merupakan driver (program utama) yang menerima
 * sebuah string email lalu memvalidasinya
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Hint 1: Untuk mendapatkan input dari user, umumnya bisa dengan memasukkan
        // parameter System.in
        // ke dalam konstruktor Scanner.
        try {
            Scanner scan = new Scanner(System.in);
            Email email = new Email(scan.next());
            if (email.validateEmail()) {
                System.out.println("true");
                System.out.println("Email validated.");
            }
            scan.close();
        } catch (InvalidEmailException e) {
            System.out.println("InvalidEmailException! " + e.getMessage());
            System.out.println("Email string error!");
        } catch (InvalidDomainException e) {
            System.out.println("InvalidDomainException! " + e.getMessage());
            System.out.println("Email string error!");
        } finally {
            System.out.println("Operation finished.");
        }
    }
}