/**
 * MinOp.java
 * MinOp adalah sebuah kelas yang dapat mengembalikan sebuah integer yang
 * merupakan operasi minimum untuk mencapai array yang diinginkan
 *
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class MinOp {
    private boolean isSumZero(Number[] arrNum) {
        for (int i = 0; i < arrNum.length; i++) {
            if (arrNum[i].intValue() > 0) {
                return false;
            }
        }
        return true;
    }

    private boolean isAllEven(Number[] arrNum) {
        for (int i = 0; i < arrNum.length; i++) {
            if (arrNum[i].intValue() % 2 == 1) {
                return false;
            }
        }
        return true;
    }

    public int minimumOperationsNeeded(Number[] arrNum) {
        // mengembalikan operasi minimum untuk mencapai array yang diinginkan
        int count = 0;
        while (!isSumZero(arrNum)) {
            if (isAllEven(arrNum)) {
                for (int i = 0; i < arrNum.length; i++) {
                    arrNum[i] = (int) (arrNum[i].intValue() / 2);
                }
                count++;
            } else {
                for (int i = 0; i < arrNum.length; i++) {
                    if (arrNum[i].intValue() % 2 == 1) {
                        arrNum[i] = (int) (arrNum[i].intValue() - 1);
                        count++;
                    }
                }
            }
        }
        return count;
    }
}
