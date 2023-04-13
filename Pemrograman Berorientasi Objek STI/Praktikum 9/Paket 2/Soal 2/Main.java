/**
 * Main.java
 * Main adalah sebuah kelas yang menerima barisan bilangan bulat yang dipisahkan
 * oleh spasi kemudian mengembalikan list baru yang terurut secara menaik tanpa
 * ada nilai yang duplikat
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.Scanner;
import java.util.SortedSet;
import java.util.TreeSet;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		SortedSet<Integer> sortedResult = new TreeSet<Integer>();
		try {
			String x = scan.nextLine();
			String[] numbers = x.split(" ");
			for (int i = 0; i < numbers.length; i++) {
				sortedResult.add(Integer.parseInt(numbers[i]));
			}
			System.out.println(sortedResult);
		} catch (NumberFormatException e) {
			System.out.println("[]");
		}
		scan.close();
	}
}