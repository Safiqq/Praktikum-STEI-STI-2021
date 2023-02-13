/**
 * Serigala.java
 * Serigala merupakan turunan dari kelas Animal
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Serigala extends Animal {

    private long basePower;
    private boolean kawanan;

    public Serigala(long basePower, boolean kawanan) {
        // Konstruktor
        super(4);
        this.basePower = basePower;
        this.kawanan = kawanan;
    }

    private boolean hasKawanan() {
        // Mengembalikan state apakah ia memiliki kawanan atau tidak
        return kawanan;
    }

    @Override
    public long getAnimalPower() {
        // Mengembalikan kekuatan serigala.
        // Apabila ia memiliki kawanan dan anak, formulanya basePower * 3 * children
        // Selain itu, kekuatan hanya bernilai basePower
        return (hasKawanan() && getNumberOfChildren() > 0) ? basePower * 3 * getNumberOfChildren() : basePower;
    }
}