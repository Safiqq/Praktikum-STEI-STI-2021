/**
 * V8Engine.java
 * V8Engine merupakan kelas implementasi dari Engine
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */


public class V8Engine implements Engine {
    private int engineCapacity;
    private Boolean isSupercharged;

    public V8Engine(int engineCapacity, Boolean isSupercharged) {
        // Konstruktor
        this.engineCapacity = engineCapacity;
        this.isSupercharged = isSupercharged;
    }

    @Override
    public int getEngineCapacity() {
        // Apabila isSupercharged true, engineCapacity + 250
        // else kembalikan engineCapacity
        return isSupercharged ? engineCapacity + 250 : engineCapacity;
    }

    @Override
    public String sound() {
        // Kembalikan ngengngeng
        return "ngengngeng";
    }
}
