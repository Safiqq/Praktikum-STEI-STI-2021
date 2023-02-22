/**
 * CarWorkshop.java
 * CarWorkshop merupakan kelas yang berfungsi untuk mengganti roda dan mesin mobil
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class CarWorkshop {
    public void changeTyre(Car car, Tyre tyre) {
        // Mengganti ban mobil
        car.setTyre(tyre);
    }

    public void changeEngine(Car car, Engine engine) {
        // Mengganti mesin mobil
        car.setEngine(engine);
    }
}
