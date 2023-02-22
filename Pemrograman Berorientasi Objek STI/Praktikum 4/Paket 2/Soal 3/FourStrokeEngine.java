/**
 * FourStrokeEngine.java
 * FourStrokeEngine merupakan kelas implementasi dari Engine
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class FourStrokeEngine implements Engine {
    private int engineCapacity;

    public FourStrokeEngine(int engineCapacity) {
        // Konstruktor
        this.engineCapacity = engineCapacity;
    }

    @Override
    public int getEngineCapacity() {
        // Kembalikan kapasitas mesin
        return engineCapacity;
    }

    @Override
    public String sound() {
        // Kembalikan "brumbrum"
        return "brumbrum";
    }
}
