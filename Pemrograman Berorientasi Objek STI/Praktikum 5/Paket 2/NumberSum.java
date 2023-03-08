/**
 * NumberSum.java
 * NumberSum merupakan sebuah kelas untuk menghitung penjumlahan elemen-elemen
 * array dengan tipe data yang sama
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

 public class NumberSum {
    public Number[] numberSum(Number[] numArr) {
        Number[] answer = new Number[numArr.length];
        boolean[] visited = new boolean[numArr.length];
        int k = 0;
        for (int i = 0; i < numArr.length; i++) {
            if (visited[i]) continue;
            answer[k] = numArr[i];
            for (int j = i + 1; j < numArr.length; j++) {
                if(numArr[j].getClass().equals(numArr[i].getClass())) {
                    if (numArr[i] instanceof Byte) answer[k] = (byte)(answer[k].byteValue() + numArr[j].byteValue());
                    else if (numArr[i] instanceof Integer) answer[k] = (int)(answer[k].intValue() + numArr[j].intValue());
                    else if (numArr[i] instanceof Double) answer[k] = (double)(answer[k].doubleValue() + numArr[j].doubleValue());
                    else if (numArr[i] instanceof Float) answer[k] = (float)(answer[k].floatValue() + numArr[j].floatValue());
                    else if (numArr[i] instanceof Short) answer[k] = (short)(answer[k].shortValue() + numArr[j].shortValue());
                    else if (numArr[i] instanceof Long) answer[k] = (long)(answer[k].longValue() + numArr[j].longValue());
                    visited[j] = true;
                }
            }
            k++;
        }
        return answer;
    }
}
