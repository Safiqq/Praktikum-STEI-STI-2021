/**
 * Vehicle.java
 * Vechile merupakan sebuah interface untuk semua kendaraan
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

interface Vehicle {
    public int getNumberOfWheels();

    public int getMaxSpeed();

    public String getFuelType();

    public void start();

    public void stop();

    public void turn(String direction);
}