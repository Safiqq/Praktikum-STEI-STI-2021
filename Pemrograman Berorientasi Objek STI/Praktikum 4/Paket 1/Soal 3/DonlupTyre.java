/**
 * DonlupTyre.java
 * DonlupTyre merupakan kelas implementasi dari Tyre
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class DonlupTyre implements Tyre {
    private int pressure;
    private int width;
    private Boolean isSlick;

    public DonlupTyre(int pressure, int width, Boolean isSlick) {
        // Konstruktor
        this.pressure = pressure;
        this.width = width;
        this.isSlick = isSlick;
    }

    @Override
    public int getTyrePressure() {
        // Mengembalikan pressure
        return pressure;
    }

    @Override
    public int getTyreWidth() {
        // Mengembalikan width
        return width;
    }

    @Override
    public Boolean isSlickTyre() {
        // Mengembalikan isSlick
        return isSlick;
    }
}
