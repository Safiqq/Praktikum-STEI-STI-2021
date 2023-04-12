/**
 * PalindromeProcessor.java
 * PalindromeProcessor merupakan sebuah kelas yang dapat mengembalikan substring
 * palindrom terpanjang
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class PalindromeProcessor {

    public String longestPalindromeSubstring(String str) {
        // keluarkan susbtring palindrome terpanjang
        StringBuilder answer = new StringBuilder();
        for (int i = 0; i < str.length(); i++) {
            StringBuilder temp = new StringBuilder();

            for (int j = i; j < str.length(); j++) {
                temp.append(str.charAt(j));
                boolean isPalindrome = true;
                for (int k = 0; k < temp.length() / 2; k++) {
                    if (temp.charAt(k) != temp.charAt(temp.length() - k - 1)) isPalindrome = false;
                }
                if (isPalindrome && answer.length() < temp.length()) {
                    answer.setLength(0);
                    answer.append(temp);
                }
            }
        }
        return answer.toString();
    }
}
