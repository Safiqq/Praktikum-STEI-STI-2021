/**
 * DelayedCounting.java
 * DelayedCounting adalah sebuah kelas yang mengeluarkan perhitungan
 * menuju suatu angka setelah delay sekian milidetik
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class DelayedCounting {
    public static void printDelayed(int delayMillisec, int maxCount) {
        Thread thread = new Thread(new Runnable() {
            @Override
            public void run() {
                try {
                    Thread.sleep(delayMillisec);
                    for (int i = 1; i <= maxCount; i++) {
                        System.out.println(i);
                    }
                } catch (InterruptedException e) {
                }
            }
        });
        thread.start();
    }
}