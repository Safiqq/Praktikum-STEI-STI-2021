/**
 * MaskPII.java
 * MaskPII adalah sebuah kelas yang dapat melakukan masking terhadap PII
 *
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class MaskPII {
    private String maskEmail(String email) {
        int idxAt = email.indexOf("@");
        email = email.toLowerCase();
        return email.charAt(0) + "*****" + email.substring(idxAt - 1);
    }

    private String maskPhoneNumber(String phoneNumber) {
        String[] countryCode = { "", "+*-", "+**-", "+***-" };
        phoneNumber = phoneNumber.replaceAll("[^0-9]", "");
        return countryCode[phoneNumber.length() - 10] + "***-***-" + phoneNumber.substring(phoneNumber.length() - 4);
    }

    public String maskPII(String pii) {
        // dilakukan pengecekan String pii
        // jika pii merupakan email, panggil method maskEmail
        // jika pii merupakan phone number, panggil method maskPhoneNumber
        int idxAt = pii.indexOf("@");
        return idxAt > 0 ? maskEmail(pii) : maskPhoneNumber(pii);
    }
}
