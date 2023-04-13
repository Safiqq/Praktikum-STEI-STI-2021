/**
 * Main.java
 * Main adalah sebuah kelas yang memanfaatkan TreeSet dari Collection Java
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.*;

public class Main {
    public static void main(String[] args) {
        TreeSet<Integer> t = new TreeSet<Integer>();
        Scanner scan = new Scanner(System.in);
        Integer Q = scan.nextInt();
        for (int i = 0; i < Q; i++) {
            String op = scan.next();
            if (op.equals("add")) {
                int X = scan.nextInt();
                t.add(X);
            } else if (op.equals("remove")) {
                int X = scan.nextInt();
                if (t.contains(X)) t.remove(X);
                else
                    System.out.println("Element " + X + " is not in The TreeSet");
            } else if (op.equals("first")) {
                if (t.size() > 0)
                    System.out.println(t.first());
                else
                    System.out.println("EMPTY");

            } else if (op.equals("last")) {
                if (t.size() > 0)
                    System.out.println(t.last());
                else
                    System.out.println("EMPTY");
            }
        }
        scan.close();
    }
}