/**
 * CasioGraph.java
 * CasioGraph adalah sebuah kelas yang mengimplementasikan interface
 * GraphCalculator
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class CasioGraph implements GraphCalculator {
	private Point point;
	private int batteryLevel;
	private Boolean status;

	public CasioGraph(int x, int y) {
		batteryLevel = 100;
		status = false;
		point = new Point(x, y);
	}

	public int add(int x, int y) {
		if (status) {
			batteryLevel -= 10;
			if (batteryLevel <= 0) status = false;
			return x + y;
		} else return -1;
	}

	public int substract(int x, int y) {
		if (status) {
			batteryLevel -= 10;
			if (batteryLevel <= 0) status = false;
			return x - y;
		} else return -1;
	}

	public int multiply(int x, int y) {
		if (status) {
			batteryLevel -= 10;
			if (batteryLevel <= 0) status = false;
			return x * y;
		} else return -1;
	}

	public double divide(int x, int y) {
		if (status) {
			batteryLevel -= 10;
			if (batteryLevel <= 0) status = false;
			return x / y;
		} else return -1;
	}

	public void start() {
		if (batteryLevel > 0) {
			status = true;
		}
	}

	public void stop() {
		status = false;
	}

	public int checkBattery() {
		return batteryLevel;
	}

	public void shiftX(int x) {
		if (status) {
			batteryLevel -= 10;
			if (batteryLevel <= 0) status = false;
			point.setX(point.getX() + x);
		}
	}

	public void shiftY(int y) {
		if (status) {
			batteryLevel -= 10;
			if (batteryLevel <= 0) status = false;
			point.setY(point.getY() + y);
		}
	}

	public double distance(int x, int y) {
		if (status) {
			batteryLevel -= 10;
			if (batteryLevel <= 0) status = false;
			return Math.sqrt(Math.pow(point.getX() - x, 2) + Math.pow(point.getY() - y, 2));
		} else return -1;
	}

	public Boolean getStatus() {
		return status;
	}

	public Point getPoint() {
		return point;
	}

	public void charge() {
		batteryLevel = 100;
		status = true;
	}
}