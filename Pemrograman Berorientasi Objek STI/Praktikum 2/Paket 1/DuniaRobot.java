
/**
 * DuniaRobot.java
 * DuniaRobot berfungsi untuk mengetahui harga dan spesifikasi masing-masing
 * model robot
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.Scanner;

public class DuniaRobot {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int jenisRobot = scan.nextInt();
        if (jenisRobot == 1) {
            int numberOfParts = scan.nextInt();
            int totalTransformation = scan.nextInt();
            boolean isActive = scan.nextBoolean();
            Bumblebee robot = new Bumblebee(numberOfParts, isActive);
            for (int i = 0; i < totalTransformation; i++) {
                robot.addTransformation();
            }

            System.out.println("Number of Parts: " + robot.getNumberOfParts() + ", IsActive: " + robot.getIsActive());
            System.out.println("Jumlah transformasi: " + robot.getTotalTransformation());
            System.out.println("Harga robot: " + robot.getPrice());
        } else if (jenisRobot == 2) {
            long price = scan.nextLong();
            int totalModel = scan.nextInt();
            Sirik robot = new Sirik(price);
            for (int i = 0; i < totalModel; i++) {
                robot.addModel();
            }

            System.out.println("Number of Parts: " + robot.getNumberOfParts() + ", IsActive: " + robot.getIsActive());
            System.out.println("Jumlah model: " + robot.getTotalModel());
            System.out.println("Harga robot: " + robot.getPrice());
        } else if (jenisRobot == 3) {
            long mileage = scan.nextLong();
            boolean isActive = scan.nextBoolean();
            WallE robot = new WallE(mileage, isActive);

            System.out.println("Number of Parts: " + robot.getNumberOfParts() + ", IsActive: " + robot.getIsActive());
            System.out.println("Jumlah mileage: " + robot.getMileage());
            System.out.println("Harga robot: " + robot.getPrice());
        }
        scan.close();
    }
}