/**
 * Main.java
 * Main adalah yang menggunakan Deque dari Collection Java
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		boolean reverse = false;
		Deque<Integer> deque = new ArrayDeque<Integer>();
		int Q = scan.nextInt();
		for (int i = 0; i < Q; i++) {
			String command = scan.next();
			if (command.equals("addFirst")) {
				int X = scan.nextInt();
				if (!reverse) deque.addFirst(X);
				else deque.addLast(X);
			} else if (command.equals("addLast")) {
				int X = scan.nextInt();
				if (!reverse) deque.addLast(X);
				else deque.addFirst(X);
			} else if (command.equals("pollFirst"))
				if (deque.isEmpty())
					System.out.println("EMPTY");
				else if (!reverse)
					System.out.println(deque.pollFirst().toString());
				else
					System.out.println(deque.pollLast().toString());
			else if (command.equals("pollLast"))
				if (deque.isEmpty())
					System.out.println("EMPTY");
				else if (!reverse)
					System.out.println(deque.pollLast().toString());
				else
					System.out.println(deque.pollFirst().toString());
			else if (command.equals("reverse")) reverse = !reverse;
		}
		scan.close();
	}
}
