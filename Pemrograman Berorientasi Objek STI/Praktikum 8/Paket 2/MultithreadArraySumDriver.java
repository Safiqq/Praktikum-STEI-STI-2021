/**
 * MultithreadArraySumDriver.java
 * MultithreadArraySumDriver adalah sebuah kelas yang digunakan untuk pengujian
 * kompilasi dan solusi awal
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

/*
 * Untuk mengaktifkan assertion, jalankan driver dengan flag -ea
 * Contoh:
 * $ javac MultithreadArraySum.java MultithreadArraySumDriver.java
 * $ java -ea MultithreadArraySumDriver
 */
public class MultithreadArraySumDriver {
    public static void main(String[] args) throws InterruptedException {
        int nWorkers = 3;
        Integer[] arr = { 1, 2, 3, 4, 5 };
        MultithreadArraySum arraySum = new MultithreadArraySum(nWorkers, arr);
        int expectedArraySum = 15;
        int actualArraySum = arraySum.calculateSum();

        assert expectedArraySum == actualArraySum;

        System.out.println("Congrats! No Errors :)");
    }
}