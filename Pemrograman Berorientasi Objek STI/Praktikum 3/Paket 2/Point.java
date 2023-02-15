/**
 * Point.java
 * Point merupakan sebuah kelas untuk lokasi
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Point {
    private double latitude;
    private double longitude;

    public Point(double latitude, double longitude) {
        this.latitude = latitude;
        this.longitude = longitude;
    }

    public double getLatitude() {
        return latitude;
    }

    public double getLongitude() {
        return longitude;
    }
}