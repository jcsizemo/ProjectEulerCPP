#include <cmath>

int p30() {

    int sum = 0;

    for (int i = 32; i <= 354294; i++) {

        int n = i;
        int digitSum = 0;
        while (n != 0) {
            digitSum += (int) pow((n % 10), 5);
            n /= 10;
        }

        if (digitSum == i) sum += i;
    }

    return sum;

}