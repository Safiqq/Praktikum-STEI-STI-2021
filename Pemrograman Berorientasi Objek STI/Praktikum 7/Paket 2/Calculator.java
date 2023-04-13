/**
 * Calculator.java
 * Calculator adalah sebuah kelas yang merepresentasikan kalkulator di dunia
 * nyata dan bisa menerima kalkulasi sederhana
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Calculator {
    public Calculator() {
    };

    public double calculate(double a, double b, String operation)
            throws InvalidOperationException, InvalidDivisionByZero {
        /**
         * Implementasi
         * Apabila operasi yang diinput pengguna bukan `+`, `-`, `*`, atau `/`, maka
         * kalkulator akan mengembalikan pesan error dari kelas
         * `InvalidOperationException.java`
         * 
         * Apabila kalkulator menerima input pembagian terhadap 0, maka kalkulator juag
         * akan mengembalikan pesan error dari kelas `InvalidDivisionByZero.java`
         */
        if (operation.equals("+")) return a + b;
        else if (operation.equals("-")) return a - b;
        else if (operation.equals("*")) return a * b;
        else if (operation.equals("/"))
            if (b == 0)
                throw new InvalidDivisionByZero();
            else return a / b;
        else
            throw new InvalidOperationException(operation);
    }
}

class InvalidOperationException extends Exception {
    private String operation;

    public InvalidOperationException(String operation) {
        // Implementasi InvalidOperationException
        this.operation = operation;
    }

    public String getMessage() {
        // Implementasi custom message InvalidOperationException
        // Format: "Invalid operation: " + operation
        return "Invalid operation: " + operation;
    }
}

class InvalidDivisionByZero extends Exception {
    public InvalidDivisionByZero() {
        // Implementasi InvalidDivisionByZero
    }

    public String getMessage() {
        // Implementasi custom message InvalidDivisionByZero
        // Format: "Tidak dapat melakukan pembagian terhadap 0"
        return "Tidak dapat melakukan pembagian terhadap 0";
    }
}