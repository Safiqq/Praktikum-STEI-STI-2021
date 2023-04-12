/**
 * Car.java
 * Car merupakan sebuah kelas yang merepresentasikan mobil
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Car {
    private int numberOfWheels;
    private Engine engine;
    private Tyre tyre;

    public Car(int numberOfWheels, Engine engine, Tyre tyre) {
        // Konstruktor
        this.numberOfWheels = numberOfWheels;
        this.engine = engine;
        this.tyre = tyre;
    }

    public int getNumberOfWheels() {
        // Kembalikan number of wheels
        return numberOfWheels;
    }

    public void setEngine(Engine engine) {
        // Mengeset mesin mobil
        this.engine = engine;
    }

    public void setTyre(Tyre tyre) {
        // Mengeset ban mobil
        this.tyre = tyre;
    }

    public Engine getEngine() {
        // Kembalikan engine
        return engine;
    }

    public Tyre getTyre() {
        // Kembalikan tyre
        return tyre;
    }

    public String sound() {
        // Kembalikan sound dari engine
        return engine.sound();

    }

    public Boolean isRacingCar() {
        // Apabila isSlickTyre true maka true
        // else false
        return tyre.isSlickTyre();
    }

    public String printDescription() {
        // Apabila isRacingCar true kembalikan "Mobil balap ini memiliki a roda dengan
        // kapasitas mesin x cc" dengan a numberOfWheels dan x engineCapacity
        // else kembalikan "Mobil ini memiliki a roda dengan kapasitas mesin x cc"
        return "Mobil " + (isRacingCar() ? "balap " : "") + "ini memiliki " + numberOfWheels
                + " roda dengan kapasitas mesin " + engine.getEngineCapacity() + " cc";
    }
}
