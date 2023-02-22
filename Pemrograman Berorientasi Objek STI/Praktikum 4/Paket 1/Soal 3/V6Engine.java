/**
 * V6Engine.java
 * V6Engine merupakan kelas implementasi dari Engine
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class V6Engine implements Engine {
    private int engineCapacity;
    private Boolean isTurbo;

    public V6Engine(int engineCapacity, Boolean isTurbo) {
        // Konstruktor
        this.engineCapacity = engineCapacity;
        this.isTurbo = isTurbo;
    }

    @Override
    public int getEngineCapacity() {
        // Apabila isTurbo true, engineCapacity + 200
        // else kembalikan engineCapacity
        return isTurbo ? engineCapacity + 200 : engineCapacity;
    }

    @Override
    public String sound() {
        // Kembalikan vroomvroom
        return "vroomvroom";
    }
}
