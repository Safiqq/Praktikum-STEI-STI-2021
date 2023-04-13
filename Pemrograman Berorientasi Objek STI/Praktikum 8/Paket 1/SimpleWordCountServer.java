/**
 * SimpleWordCountServer.java
 * SimpleWordCountServer adalah sebuah kelas yang menghitung jumlah kata semua elemen
 * dalam suatu array dengan memanfaatkan Java multithreading
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class SimpleWordCountServer {
    // nWorkers menyatakan jumlah maximum threads yang tersedia pada server a.k.a
    // thread pool
    private int nWorkers;

    SimpleWordCountServer(int nWorkers) {
        // Please provide your solution in the space below
        this.nWorkers = nWorkers;
    }

    public Integer[] processRequests(String[] requests) throws InterruptedException {
        // processRequests akan membuat threads dan memetakan elemen-elemen requests
        // kepada threads tersebut
        // setiap thread kemudian memanggil method countWords
        // main thread (thread yang invoked method ini) akan menunggu semua thread
        // selesai
        // terakhir main thread akan mengembalikan hasil penghitungan kata untuk setiap
        // elemen requests
        // Please provide your solution in the space below
        Integer[] wordCounts = new Integer[requests.length];
        Thread[] threads = new Thread[nWorkers];
        for (int i = 0; i < nWorkers; i++) {
            final int temp = i;
            threads[i] = new Thread(new Runnable() {
                @Override
                public void run() {
                    for (int j = temp; j < requests.length; j += nWorkers) {
                        wordCounts[j] = countWords(requests[j]);
                    }
                }
            });
            threads[i].start();
        }
        for (Thread thread : threads) {
            if (thread != null) thread.join();
        }
        return wordCounts;
    }

    protected int countWords(String request) {
        // Please provide your solution in the space below
        request = request.trim();
        if (request.length() == 0) return 0;
        else {
            int sum = 1;
            for (int i = 1; i < request.length(); i++) {
                if (request.charAt(i) == ' ' && request.charAt(i - 1) != ' ') sum++;
            }
            return sum;
        }
    }
}