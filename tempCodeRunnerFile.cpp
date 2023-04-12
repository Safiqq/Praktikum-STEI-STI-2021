#include <cmath>

    int intLength(int x) {
        int count = 0;
        while (x > 0) {
            count++;
            x /= 10;
        }
        return count;
    }

    bool isPalindrome(int x) {
        if (x < 0) return false;
        for (int i = 0; i < intLength(x); i++) {
            std::cout << x / (pow(10, intLength(x) - 1));
            std::cout << ((int)(x / (pow(10, i))) % 10);
            if (x / (pow(10, intLength(x) - 1)) != ((int)(x / (pow(10, i))) % 10))
                return false;
        }
        return true;
    }