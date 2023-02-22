/**
 * TwoStrokeEngine.java
 * TwoStrokeEngine merupakan kelas implementasi dari Engine
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class TwoStrokeEngine implements Engine {
    private int engineCapacity;

    public TwoStrokeEngine(int engineCapacity) {
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
        // Kembalikan "taktaktak"
        return "taktaktak";
    }
}
