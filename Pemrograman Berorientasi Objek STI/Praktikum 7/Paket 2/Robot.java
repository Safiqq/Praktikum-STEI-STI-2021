/**
 * Robot.java
 * Robot adalah sebuah kelas yang dapat menerima perintah untuk melakukan aksi
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

/**
 * Jangan lupa tambahkan kata kunci untuk menghandle exception
 */
public class Robot extends Exception {
    /**
     * Tambahkan atribut kelas disini
     */
    private int x;
    private int y;

    public Robot() {
        /**
         * Konstruktor
         * Jangan lupa inisialisasi atribut kelas
         */
        x = 0;
        y = 0;
    }

    public void walk(int x, int y) throws Exception {
        /**
         * Implementasi
         * Apabila hasil penambahan x atau y melebihi 10, dilempar sebuah exception
         * dengan pesan "Tidak bisa jalan". Atribut tidak ditambahkan pada kasus ini.
         * 
         * Apabila input valid, tambahkan nilai atribut dan print pesan
         * "Sedang berjalan menuju (x, y)"
         */
        if ((this.x + x > 10) || (this.y + y > 10))
            throw new Exception(String.format("Tidak bisa jalan"));
        else {
            this.x += x;
            this.y += y;
            System.out.println(String.format("Sedang berjalan menuju (%d, %d)", x, y));
        }
    }

    public void talk(String language) throws Exception {
        /**
         * Implementasi
         * Apabila input bukan "Indonesia" atau "Inggris", lempar exception dengan pesan
         * "Tidak bisa berbicara dalam bahasa {language}"
         * 
         * Apabila input valid, print pesan "Sedang berbicara dalam bahasa {language}"
         */
        if (language.equals("Indonesia") || language.equals("Inggris"))
            System.out.println(String.format("Sedang berbicara dalam bahasa %s", language));
        else
            throw new Exception(String.format("Tidak bisa berbicara dalam bahasa %s", language));
    }

    public void receiveCommand(String command) throws Exception {
        /**
         * Implementasi
         * Apabila input bukan "walk" atau "talk", lempar exception "Perintah {command}
         * tidak dikenal"
         */
        if (!command.equals("walk") && !command.equals("talk"))
            throw new Exception(String.format("Perintah %s tidak dikenal", command));
    }
}