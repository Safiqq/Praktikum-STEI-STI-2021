/**
 * MataKuliah.java
 * MataKuliah merupakan sebuah kelas yang memodelkan suatu mata kuliah di ITB
 *
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class MataKuliah {
    // Deklarasi atribut
    private String kode;
    private String nama;
    private int sks;
    private String dosen;
    private int kapasitas;
    private static int jumlahMataKuliah;

    /**
     * Konstruktor
     * 
     * @param kode
     * @param nama
     * @param sks
     * @param dosen
     * @param kapasitas
     */
    public MataKuliah(String kode, String nama, int sks, String dosen, int kapasitas) {
        this.kode = kode;
        this.nama = nama;
        this.sks = sks;
        this.dosen = dosen;
        this.kapasitas = kapasitas;
        jumlahMataKuliah += 1;
    }

    /**
     * Getter kode
     * 
     * @return kode
     */
    public String getKode() {
        return kode;
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
     * Getter sks
     * 
     * @return sks
     */
    public int getSks() {
        return sks;
    }

    /**
     * Getter dosen
     * 
     * @return dosen
     */
    public String getDosen() {
        return dosen;
    }

    /**
     * Getter kapasitas
     * 
     * @return kapasitas
     */
    public int getKapasitas() {
        return kapasitas;
    }

    /**
     * Getter jumlah mata kuliah
     * 
     * @return jumlah mata kuliah
     */
    public static int getJumlahMataKuliah() {
        return jumlahMataKuliah;
    }

    /**
     * Menambahkan kapasitas mahasiswa
     * 
     * @param tambahan jumlah kapasitas yang ditambahkan
     */
    public void tambahKapasitas(int tambahan) {
        kapasitas += tambahan;
    }
}
