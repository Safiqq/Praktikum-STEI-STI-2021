/**
 * PoliceCar.java
 * PoliceCar merupakan sebuah kelas yang mengimplementasikan interface
 * TrackableVehicle
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class PoliceCar implements TrackableVehicle {
    private String plateNumber;
    private Point gpsPosition;
    private int speed;
    private String direction;
    private int wheel;
    private String fuelType;
    private Boolean started;

    public PoliceCar(String plateNumber, Point gpsPosition, int speed, int wheel, String fuelType) {
        this.plateNumber = plateNumber;
        this.gpsPosition = gpsPosition;
        this.speed = speed;
        direction = "North";
        this.wheel = wheel;
        this.fuelType = fuelType;
        started = false;
    }

    public String getPlateNumber() {
        return plateNumber;
    }

    public Point getGPSPosition() {
        return gpsPosition;
    }

    public int getMaxSpeed() {
        return speed;
    }

    public String getDirection() {
        return direction;
    }

    public int getNumberOfWheels() {
        return wheel;
    }

    public String getFuelType() {
        return fuelType;
    }

    public Boolean getStarted() {
        return started;
    }

    public void start() {
        started = true;
    }

    public void stop() {
        started = false;
    }

    public void turn(String direction) {
        this.direction = direction;
    }

}