/**
 * Elang.java
 * Elang merupakan turunan dari kelas Animal
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Elang extends Animal {

    private long basePower;
    private int jumlahTelur;

    public Elang(long basePower) {
        // Konstruktor, set jumlahTelur ke 0
        super(2);
        this.basePower = basePower;
        jumlahTelur = 0;
    }

    public int getJumlahTelur() {
        // Mengembalikan atribut jumlahTelur
        return jumlahTelur;
    }

    public void bertelur() {
        // Menambah jumlahTelur dengan 1
        jumlahTelur++;
    }

    @Override
    public long getAnimalPower() {
        // Mengembalikan kekuatan Elang dengan formula basePower * children -
        // jumlahTelur
        return basePower * getNumberOfChildren() - jumlahTelur;
    }
}