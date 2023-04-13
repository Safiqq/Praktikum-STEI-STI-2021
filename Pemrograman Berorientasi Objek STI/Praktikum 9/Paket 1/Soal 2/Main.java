/**
 * Main.java
 * Main adalah sebuah kelas yang menerima dua baris string yang dipisahkan oleh
 * spasi kemudian mengembalikan satu list baru yang merupakan elemen yang sama
 * yang dimiliki oleh kedua baris string tersebut
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.*;

public class Main {
    public static List<String> findCommonElements(List<String> list1, List<String> list2) {
        List<String> kataSama = new ArrayList<String>();
        for (String kataBaris1 : list1) {
            for (String kataBaris2 : list2) {
                if (kataBaris1.equals(kataBaris2) && !kataSama.contains(kataBaris1)) kataSama.add(kataBaris1);
            }
        }
        return kataSama;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String baris1 = scan.nextLine();
        String baris2 = scan.nextLine();
        List<String> list1 = new ArrayList<String>();
        List<String> list2 = new ArrayList<String>();
        for (String kata : baris1.split(" ")) {
            list1.add(kata);
        }
        for (String kata : baris2.split(" ")) {
            list2.add(kata);
        }
        List<String> kataSama = findCommonElements(list1, list2);
        System.out.println(kataSama);
        scan.close();
    }
}
