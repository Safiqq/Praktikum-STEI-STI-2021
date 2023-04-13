/**
 * PageReplacementLRUDriver.java
 * PageReplacementLRUDriver adalah sebuah kelas untuk menjalankan dan mengecek
 * kebenaran awal program
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

// addPage(<3, 5>, 1)
// addPage(<1, 2>, 4)
// accessPage(<1, 2>)
// addPage(<1, 3>, 7)
// addPage(<2, 5>, 7)
// accessPage(<3, 5>, 1)
// accessPage(<2, 5>, 7)
public class PageReplacementLRUDriver {
    public static void main(String[] args) {
        PageReplacementLRU lru = new PageReplacementLRU(3);
        Pair<Integer, Integer> p1 = new Pair<>(3, 5);
        Pair<Integer, Integer> p2 = new Pair<>(1, 2);
        Pair<Integer, Integer> p3 = new Pair<>(1, 3);
        Pair<Integer, Integer> p4 = new Pair<>(2, 5);

        lru.addPage(p1, 1);
        lru.addPage(p2, 4);
        System.out.println(lru.accessPage(p2));
        lru.addPage(p3, 7);
        lru.addPage(p4, 7);
        System.out.println(lru.accessPage(p1));
        System.out.println(lru.accessPage(p4));

        // Expected output:
        // 4
        // page fault!
        // -1
        // 7
    }
}