/**
 * Motor.java
 * Motor adalah sebuah kelas yang merepresentasikan motor
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Motor {
    private int numberOfWheels;
    private int engineCapacity;

    public Motor(int numberOfWheels, int engineCapacity) {
        this.numberOfWheels = numberOfWheels;
        this.engineCapacity = engineCapacity;
    }

    public int getNumberOfWheels() {
        return this.numberOfWheels;
    }

    public int getEngineCapacity() {
        return this.engineCapacity;
    }

    public String sound() {
        return "Ngenggg";
    }

    public String printDescription() {
        return String.format("Motor ini memiliki %d roda dengan kapasitas mesin %d cc", this.numberOfWheels, this.engineCapacity);
    }
}