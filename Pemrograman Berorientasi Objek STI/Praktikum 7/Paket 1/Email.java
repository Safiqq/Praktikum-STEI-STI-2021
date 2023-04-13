/**
 * Email.java
 * Email adalah sebuah kelas yang digunakan untuk melakukan validasi email
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Email {
    private String email;

    public Email(String email) {
        this.email = email;
    };

    public boolean validateEmail() throws InvalidEmailException, InvalidDomainException {
        /**
         * Implementasi dengan aturan:
         * Aturan email
         * - Email harus mengandung tepat 1 karakter @ ditengah email
         * - Bagian sebelum @ tidak boleh kosong
         * - Bagian email setelah @ harus memiliki tepat 1 buah titik (.)
         * - Email hanya akan mengandung huruf, angka, (@), dan (.). Karakter lain tidak
         * perlu diperiksa
         * 
         * "john@example.com" => Email Valid
         * "jane.doe@gmail.com" => Email Valid
         * "" => mengembalikan pesan "Email tidak boleh kosong"
         * "example.com" => mengembalikan pesan "Email harus mengandung tepat satu
         * buah @"
         * "@example.com" => mengembalikan pesan "@ tidak boleh di awal email"
         * "john@com" => mengembalikan pesan "Email harus memiliki domain yang valid"
         */
        if (email.isEmpty())
            throw new InvalidEmailException("Email tidak boleh kosong");

        int atIndex = email.indexOf('@');
        if (atIndex == 0)
            throw new InvalidEmailException("@ tidak boleh di awal email");
        else if (atIndex == -1 || email.indexOf('@', atIndex + 1) != -1)
            throw new InvalidEmailException("Email harus mengandung tepat satu buah @");

        int dotIndex = email.indexOf('.', atIndex);
        if (dotIndex == -1 || dotIndex == atIndex + 1 || dotIndex == email.length() - 1
                || email.indexOf('.', dotIndex + 1) != -1)
            throw new InvalidDomainException();

        return true;
    }
}

class InvalidEmailException extends Exception {
    private String message;

    public InvalidEmailException(String message) {
        // Implementasi InvalidEmailException
        this.message = message;
    }

    public String getMessage() {
        return message;
    }
}

class InvalidDomainException extends Exception {
    public String getMessage() {
        // Implementasi custom message InvalidDomainException
        // Return pesan multak berisi: "Email harus memiliki domain yang valid
        return "Email harus memiliki domain yang valid";
    }
}