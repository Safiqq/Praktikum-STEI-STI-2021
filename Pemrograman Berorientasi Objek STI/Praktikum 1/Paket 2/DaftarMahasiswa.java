/**
 * IPMahasiswa.java
 * [Jelaskan kegunaan class ini]
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.Scanner;

public class DaftarMahasiswa {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String nama = scan.next();
        String nim = scan.next();
        int sks = scan.nextInt();
        int sksTambahan = scan.nextInt();
        Mahasiswa mahasiswa = new Mahasiswa(nama, nim, sks);
        System.out.println("Nama mahasiswa: " + mahasiswa.getNama());
        System.out.println("NIM mahasiswa: " + mahasiswa.getNim());
        System.out.println("SKS mahasiswa: " + mahasiswa.getSks());
        System.out.println("Jumlah mahasiswa: " + mahasiswa.getJumlahMahasiswa());
        mahasiswa.tambahSks(sksTambahan);
        System.out.println("Total Revisi SKS mahasiswa: " + mahasiswa.getSks());
        scan.close();
    }
}