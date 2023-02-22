/**
 * CarPrinter.java
 * CarPrinter merupakan sebuah kelas untuk mencetak informasi Car dan kelas turunannya
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.ArrayList;
import java.util.List;

public class CarPrinter {
    private List<Car> carList = new ArrayList<Car>();
    // Buat atribut testCar di sini
    Car testCar;

    public void addCar(Car newCar) {
        // Menambahkan newCar ke dalam carList
        // Hint: Penambahan elemen ke dalam sebuah objek ArrayList dapat menggunakan
        // method
        // add(E element) yang dimiliki objek tersebut
        carList.add(newCar);
    }

    public List<Car> getCarList() {
        // Mengembalikan carList
        return carList;
    }

    public Car getTestCar() {
        // Mengembalikan testCar
        return testCar;
    }

    public void setTestCar(String carType) {
        // Menetapkan atribut testCar berdasarkan parameter carType
        // Apabila carType bernilai "Car", maka testCar menjadi sebuah objek baru dengan
        // kelas Car
        // yang memiliki parameter: numberOfWheels = 4 dan engineCapacity = 5
        // Apabila carType bernilai "Bus", maka testCar menjadi sebuah objek baru dengan
        // kelas Bus
        // yang memiliki parameter: numberOfWheels = 6, engineCapacity = 10,
        // passengerCapacity = 20, dan isUsedForLongTrip = True
        // Apabila carType bernilai "Perari", maka testCar menjadi sebuah objek baru
        // dengan kelas Perari
        // yang memiliki parameter: numberOfWheels = 4 engineCapacity = 20, averageSpeed
        // = 50, dan isInsuranced = False

        // Hint: Pengecekan kesamaan antara dua string sebaiknya menggunakan method
        // equals()
        // yang dimiliki kedua Object tersebut. Contoh: "test".equals("test") bernilai
        // True
        if (carType.equals("Car")) {
            testCar = new Car(4, 5);
        } else if (carType.equals("Bus")) {
            testCar = new Bus(6, 10, 20, true);
        } else if (carType.equals("Perari")) {
            testCar = new Perari(4, 20, 50, false);
        }
    }

    public void printCarList() {
        // Melakukan iterasi terhadap isi `carList`, kemudian untuk setiap `car` ia
        // secara berturut-turut akan:
        // 1. Tergantung instance dari car:
        // * Untuk kelas `Car` saja dan bukan _instance_ dari childnya,
        // maka cetak `"Car: "` lalu cetak output fungsi `sound()` dan `honk()` dengan
        // semua kata dipisah oleh spasi dan diakhiri _new line_
        // * Untuk kelas `Bus`, cetak `"Bus: "`,
        // lalu cetak output fungsi `sound()` dan `honk()` dengan semua kata dipisah
        // oleh spasi dan diakhiri _new line_
        // * Untuk kelas `Perari`, cetak `"Perari: "`,
        // lalu cetak output fungsi `sound()` dan `honk()` dengan semua kata dipisah
        // oleh spasi diakhiri _new line_
        // * Contoh untuk kelas Bus, maka output yang benar adalah : `Bus: Cesss Notnot`

        // * *Hint: Pengecekan* _instance_ *sebuah kelas* *dilakukan dengan menggunakan
        // operator `instanceof` (Contoh: "string" instanceof String)*

        // 2. Memanggil metode `printDescription` diakhiri _new line_

        // Contoh Output yang Tepat:
        // Untuk elemen dengan kelas `Car`, dengan 10 numberOfWheels dan 20 engine
        // capacity, maka output dari fungsi ini adalah:
        // Car: Ngenggg Din
        // Mobil ini memiliki 10 roda dengan kapasitas mesin 20 cc
        //
        for (Car car : carList) {
            System.out.println(car.getClass().getSimpleName() + ": " + car.sound() + " " + car.honk());
            System.out.println(car.printDescription());
        }
    }
}
