#include "Primes.h"

int p27() {

    std::vector<int> primes = getPrimes(1000);

    std::vector<bool> notPrimes = getNotprimes(100000);

    int highest = 1;
    int product = 0;

    for (int a = -999; a < 1000; a++) {

        for (int b : primes) {

            int n = 1;
            int possiblePrime = n*n + a*n + b;
            while (possiblePrime > 0 && !notPrimes[possiblePrime]) {
                n++;
                possiblePrime = n*n + a*n + b;
            }

            if (highest < n + 1) {
                highest = n + 1;
                product = a*b;
            }
        }


    }

    return product;

}