/**
 * Motor.java
 * Motor adalah sebuah kelas yang merepresentasikan motor
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Motor {
    private int numberOfWheels;
    private Engine engine;
    private Tyre tyre;

    public Motor(int numberOfWheels, Engine engine, Tyre tyre) {
        // Konstruktor
        this.numberOfWheels = numberOfWheels;
        this.engine = engine;
        this.tyre = tyre;
    }

    public void setEngine(Engine engine) {
        // Mengeset mesin motor
        this.engine = engine;
    }

    public void setTyre(Tyre tyre) {
        // Mengeset ban motor
        this.tyre = tyre;
    }

    public Engine getEngine() {
        // Mengembalikan mesin
        return engine;
    }

    public Tyre getTyre() {
        // Mengembalikan ban
        return tyre;
    }

    public String sound() {
        // Mengembalikan string berisi suara mesin
        return engine.sound();
    }

    public String printDescription() {
        // Mengembalikan string berformat "Motor ini memiliki a roda dengan kapasitas
        // mesin b cc", dimana a adalah numberOfWheels dan b adalah engineCapacity
        return "Motor ini memiliki " + numberOfWheels + " roda dengan kapasitas mesin " + engine.getEngineCapacity()
                + " cc";
    }
}