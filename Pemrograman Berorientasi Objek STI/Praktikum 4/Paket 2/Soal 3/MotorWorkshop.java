/**
 * MotorWorkshop.java
 * MotorWorkshop merupakan kelas yang berfungsi untuk mengganti roda dan mesin motor
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class MotorWorkshop {
    public void changeTyre(Motor motor, Tyre tyre) {
        // Melakukan penggantian tyre pada motor
        motor.setTyre(tyre);
    }

    public void changeEngine(Motor motor, Engine engine) {
        // Melakukan penggantian engine pada motor
        motor.setEngine(engine);
    }
}
