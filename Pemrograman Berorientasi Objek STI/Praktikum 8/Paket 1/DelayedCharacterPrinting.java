/**
 * DelayedCharacterPrinting.java
 * DelayedCharacterPrinting adalah sebuah kelas yang mengeluarkan perhitungan
 * menuju suatu string lengkap setelah delay sekian milidetik
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class DelayedCharacterPrinting {
    public static void printDelayed(int delayMillisec, String word) {
        Thread thread = new Thread(new Runnable() {
            @Override
            public void run() {
                try {
                    Thread.sleep(delayMillisec);
                    for (int i = 0; i < word.length(); i++) {
                        System.out.println(word.charAt(i));
                    }
                } catch (InterruptedException e) {}
            }
        });
        thread.start();
    }
}