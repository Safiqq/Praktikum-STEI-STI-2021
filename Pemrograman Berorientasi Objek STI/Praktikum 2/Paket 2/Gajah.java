/**
 * Gajah.java
 * Gajah merupakan turunan dari kelas Animal
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Gajah extends Animal {

    private long basePower;
    private long jumlahGading;

    public Gajah(long basePower, int jumlahGading) {
        // Konstruktor, jumlah gading minimal 0 maksimal 2
        super(4);
        this.basePower = basePower;
        this.jumlahGading = (jumlahGading < 0) ? 0 : ((jumlahGading > 2) ? 2 : jumlahGading);
    }

    public long getJumlahGading() {
        // Mengembalikan jumlahGading
        return jumlahGading;
    }

    @Override
    public long getAnimalPower() {
        // Mengembalikan kekuatan Gajah dengan formula 3 * basePower * (1 +
        // jumlahGading)
        return 3 * basePower * (1 + jumlahGading);
    }
}