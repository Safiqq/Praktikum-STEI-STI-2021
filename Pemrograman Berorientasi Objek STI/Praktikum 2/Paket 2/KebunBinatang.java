/**
 * KebunBinatang.java
 * KebunBinatang berfungsi untuk mengetahui kekuatan dari masing-masing
 * hewan di kebun binatang
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.Scanner;

public class KebunBinatang {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int jenisBinatang = scan.nextInt();
        if (jenisBinatang == 1) {
            int children = scan.nextInt();
            int jumlahTelur = scan.nextInt();
            Elang hewan = new Elang(5);

            hewan.increaseChild(children);
            for (int i = 0; i < jumlahTelur; i++) {
                hewan.bertelur();
            }

            System.out.println("Number of Legs: " + hewan.getNumberOfLegs() + ", Child: " + hewan.getNumberOfChildren());
            System.out.println("Jumlah Telur: " + hewan.getJumlahTelur());
            System.out.println("Animal Power: " + hewan.getAnimalPower());
        } else if (jenisBinatang == 2) {
            int children = scan.nextInt();
            int jumlahGading = scan.nextInt();
            Gajah hewan = new Gajah(10, jumlahGading);

            hewan.increaseChild(children);

            System.out.println("Number of Legs: " + hewan.getNumberOfLegs() + ", Child: " + hewan.getNumberOfChildren());
            System.out.println("Jumlah Gading: " + hewan.getJumlahGading());
            System.out.println("Animal Power: " + hewan.getAnimalPower());
        } else if (jenisBinatang == 3) {
            int children = scan.nextInt();
            Boolean kawanan = scan.nextBoolean();
            Serigala hewan = new Serigala(10, kawanan);

            hewan.increaseChild(children);

            System.out.println("Number of Legs: " + hewan.getNumberOfLegs() + ", Child: " + hewan.getNumberOfChildren());
            System.out.println("Serigala " + (kawanan ? "" : "tidak ") + "berada di dalam kawanan");
            System.out.println("Animal Power: " + hewan.getAnimalPower());

        }
        scan.close();
    }
}