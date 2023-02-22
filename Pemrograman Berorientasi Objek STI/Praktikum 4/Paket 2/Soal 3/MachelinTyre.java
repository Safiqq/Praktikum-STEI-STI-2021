/**
 * MachelinTyre.java
 * MachelinTyre merupakan kelas implementasi dari Tyre
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

 public class MachelinTyre implements Tyre {
    private int pressure;

    public MachelinTyre(int pressure) {
        // Konstruktor
        this.pressure = pressure;
    }

    @Override
    public String getTyreName() {
        // Kembalikan Machelin
        return "Machelin";
    }

    @Override
    public int getTyrePressure() {
        // Kembalikan nilai pressure
        return pressure;
    }

    @Override
    public int getTyreWidth() {
        // Kembalikan 200
        return 200;
    }
}
