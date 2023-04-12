/**
 * CheckType.java
 * CheckType adalah sebuah kelas yang menyimpan tipe data generic T
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class CheckType<T> {
    private T t;
    private String type;

    public CheckType(T t) {
        // Konstruktor
        this.t = t;
        type = t.getClass().getSimpleName();
    }

    public T getT() {
        // Kembalikan nilai t
        return t;
    }

    public String getType() {
        // Kembalikan tipe data T
        return type;
    }

    public String printTypeandValue() {
        // Kembalikan nilai "Tipe: Nilai"
        // Contoh "String: Halo"
        return type + ": " + t;
    }
}