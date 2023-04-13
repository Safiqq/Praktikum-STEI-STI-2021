/**
 * Bank.java
 * Bank adalah sebuah kelas yang dapat mensimulasikan cara kerja bank secara sederhana
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Bank {
    /**
     * Tambahkan atribut kelas disini
     */
    private String name;

    public Bank(String name) {
        /**
         * Konstruktor
         * Jangan lupa inisialisasi atribut kelas
         */
        this.name = name;
    }

    public void transfer(Account accountFrom, Account accountTo, int jumlah) throws Exception {
        /**
         * Implementasi
         * Transfer antar bank (akun dengan nama bank berbeda) akan dikenakan biaya
         * admin sebesar
         * 2500 yang dikurangi dari saldo pengirim.
         * 
         * Biaya admin ini tidak ikut ditransfer ke akun tujuan.
         * 
         * Apabila accountFrom memiliki nama bank yang tidak sama dengan bank yang
         * melakukan transfer,
         * lempar exception dengan pesan "Bukan akun milik bank {bankName}".
         */
        if (name.equals(accountFrom.getBankName())) {
            accountFrom.decreaseSaldo(jumlah);
            accountTo.increaseSaldo(jumlah);
            if (!accountFrom.getBankName().equals(accountTo.getBankName())) accountFrom.decreaseSaldo(2500);
        } else
            throw new Exception(String.format("Bukan akun milik bank %s", name));
    }

    public Account createAccount(String accountName, int saldo) throws Exception {
        /**
         * Implementasi
         * Akun yang dibuat akan memiliki atribut bankName dengan nama bank yang membuat
         * akun.
         * Method ini akan melanjutkan pelemparan exception dari kelas Account.
         */
        try {
            Account acc = new Account(accountName, name, saldo);
            return acc;
        } catch (Exception e) {
            System.out.println(e.getMessage());
            throw new Exception(e);
        }
    }
}