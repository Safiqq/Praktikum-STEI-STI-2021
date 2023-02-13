/**
 * Mahasiswa.java
 * Mahasiswa merupakan sebuah kelas yang memodelkan seorang mahasiswa ITB
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Mahasiswa {
    // Deklarasi atribut
    private String nama;
    private String nim;
    private int sks;
    private static int jumlahMahasiswa;

    /**
     * Konstruktor
     * 
     * @param nama
     * @param nim
     * @param sks
     */
    public Mahasiswa(String nama, String nim, int sks) {
        this.nama = nama;
        this.nim = nim;
        this.sks = sks;
        jumlahMahasiswa++;
    }

    /**
     * Getter nama
     * 
     * @return nama
     */
    public String getNama() {
        return nama;
    }

    /**
     * Getter nim
     * 
     * @return nim
     */
    public String getNim() {
        return nim;
    }

    /**
     * Getter sks
     * 
     * @return sks
     */
    public int getSks() {
        return sks;
    }

    /**
     * Getter jumlahMahasiswa
     * 
     * @return jumlahMahasiswa yang ada
     */
    public static int getJumlahMahasiswa() {
        return jumlahMahasiswa;
    }

    /**
     * Method untuk menambah sks
     * 
     * @param sks sks yang ditambahkan
     */
    public void tambahSks(int sks) {
        this.sks += sks;
    }
}