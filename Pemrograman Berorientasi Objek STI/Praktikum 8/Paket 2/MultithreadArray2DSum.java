/**
 * MultithreadArray2DSum.java
 * MultithreadArray2DSum adalah sebuah kelas untuk menjumlahkan semua elemen
 * dalam suatu array 2 dimensi dengan memanfaatkan Java multithreading
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.ArrayList;

public class MultithreadArray2DSum {

    private int nWorkers;
    private ArrayList<Integer[]> array;

    MultithreadArray2DSum(int nWorkers, ArrayList<Integer[]> array) {
        // Inisialisasi attributes
        this.nWorkers = nWorkers;
        this.array = array;
    }

    public int calculateSum2() throws InterruptedException {
        // calculateSum2 akan membuat thread dan memetakan array 2 dimensi masukan
        // secara rata ke semua threads yang dapat dibuat
        // setiap thread akan menghitung jumlah dari setiap baris array
        // gunakan fungsi findSum pada kelas MultithreadArraySum untuk menghitung setiap
        // baris array
        return 0;
    }

    protected int findSum(MultithreadArraySum arraySum) throws InterruptedException {
        // findSum menerima parameter arraySum berupa kelas MultithreadArraySum yang
        // diinisiasi
        // setiap baris pada array 2 Dimensi untuk menghitung total penjumlahan setiap
        // baris
        return 0;
    }
}