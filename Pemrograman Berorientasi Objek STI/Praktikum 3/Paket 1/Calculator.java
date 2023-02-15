/**
 * Calculator.java
 * Calculator merupakan interface untuk semua kalkulator
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

interface Calculator {
	public int add(int a, int b);

	public int substract(int a, int b);

	public int multiply(int a, int b);

	public double divide(int a, int b);

	public void start();

	public void stop();

	public int checkBattery();
}