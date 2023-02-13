/**
 * Sirik.java
 * Sirik merupakan turunan dari kelas Robot
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Sirik extends Robot {

    private long price;
    private int totalModel;

    public Sirik(long price) {
        // Konstruktor, set jumlah model bernilai 1
        super(5, false);
        this.price = price;
        totalModel = 1;
    }

    public int getTotalModel() {
        // Mengembalikan junlah
        return totalModel;
    }

    public void addModel() {
        // Menambahkan model sejumlah 1
        totalModel++;
    }

    @Override
    public long getPrice() {
        // Apabila total model lebih dari/samadengan 2,
        // maka formula = price + (500 * numberOfParts - (100 * totalModel))
        // Apabila total model kurang dari/sama dengan 2,
        // maka formula = price + (500 * numberOfParts * totalModel)
        if (totalModel <= 2) {
            return price + (500 * getNumberOfParts() * totalModel);
        } else {
            return price + (500 * getNumberOfParts() - (100 * totalModel));
        }
    }
}