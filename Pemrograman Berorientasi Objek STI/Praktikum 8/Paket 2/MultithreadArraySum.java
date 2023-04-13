/**
 * MultithreadArraySum.java
 * MultithreadArraySum adalah sebuah kelas yang menjumlahkan semua elemen
 * dalam suatu array dengan memanfaatkan Java multithreading
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class MultithreadArraySum {
    // nWorkers menyatakan jumlah maximum threads yang tersedia
    private int nWorkers;
    // array menyatakan array masukan
    private Integer[] array;
    private int sum = 0;

    MultithreadArraySum(int nWorkers, Integer[] array) {
        // Inisialisasi attributes
        this.nWorkers = nWorkers;
        this.array = array;
    }

    public int calculateSum() throws InterruptedException {
        // calculateSum akan membuat thread dan memetakan array masukan secara rata ke
        // semua threads yang dapat dibuat
        Thread[] threads = new Thread[nWorkers];
        int sisaElemen = array.length;
        int sisaThread = nWorkers;
        int start = 0, end = 0;

        for (int i = 0; i < nWorkers; i++) {
            int ukuran = sisaElemen / sisaThread;
            end = start + ukuran;
            final int tempStart = start;
            final int tempEnd = end;
            threads[i] = new Thread(new Runnable() {
                @Override
                public void run() {
                    synchronized (this) {
                        sum += findSum(tempStart, tempEnd);
                        // System.out.println("sum: " + sum);
                    }
                }
            });
            threads[i].start();
            sisaElemen -= ukuran;
            sisaThread--;
            start = end;
            // System.out.println("start: " + tempStart + ", end: " + tempEnd + ", ukuran: "
            // + ukuran + ", sisaElemen: " + sisaElemen + ", sisaThread" + sisaThread);
        }
        for (Thread thread : threads) {
            if (thread != null) thread.join();
        }
        return sum;
    }

    protected int findSum(int start, int end) {
        // findSum akan melakukan penjumlahan elemen-elemen array pada index start
        // sampai end-1
        int sum = 0;
        for (int i = start; i < end; i++) {
            sum += array[i];
        }
        return sum;
    }
}