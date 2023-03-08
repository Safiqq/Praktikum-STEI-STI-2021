/**
 * PasswordManager.java
 * PasswordManager merupakan sebuah kelas yang dapat mengatur password
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.ArrayList;

public class PasswordManager {
    /**
     * Atribut yang menyimpan password yang telah dienkripsi
     */
    private static ArrayList<String> passwords;
    private static ArrayList<Integer> shifts;

    /**
     * Konstruktor untuk PasswordManager
     * Inisialisasi array list passwords dan shifts
     */
    public PasswordManager() {
        passwords = new ArrayList<String>();
        shifts = new ArrayList<Integer>();
    }

    /**
     * Asumsi seluruh input a-z
     * Enkripsi dilakukan dengan cara menggeser karakter sebanyak shift
     * Contoh: encrypt(qwerty,2) = sygtva
     * Anda diizinkan untuk membuat fungsi helper dengan akses private
     * yang melakukan shifting dari suatu character
     * 
     * @param password, password yang akan dienkripsi
     * @param shift,    jumlah pergeseran
     */
    public static StringBuilder encrypt(String password, int shift) {
        StringBuilder answer = new StringBuilder();
        for (int i = 0; i < password.length(); i++) {
            answer.append((char) ((((int) (password.charAt(i)) - 97 + shift) % 26) + 97));
        }
        return answer;
    }

    /**
     * Dekripsi password yang sudah dienkrip
     * 
     * @param password
     * @param shift
     */
    public static StringBuilder decrypt(String password, int shift) {
        StringBuilder answer = new StringBuilder();
        for (int i = 0; i < password.length(); i++) {
            answer.append((char) ((((int) (password.charAt(i)) - 97 - shift + 26) % 26) + 97));
        }
        return answer;
    }

    /**
     * Method untuk menambahkan password baru
     * Gunakan method encrypt
     * 
     * @param password password baru yang akan ditambahkan
     * @param shift    jumlah shift enkripsi
     */
    public static void addPassword(String password, int shift) {
        passwords.add(password);
        shifts.add(shift);
    }

    /**
     * Method untuk mengambil password
     * 
     * @param index indeks password yang akan diambil
     */
    public static String retrievePassword(int indeks) {
        return passwords.get(indeks);
    }
}
