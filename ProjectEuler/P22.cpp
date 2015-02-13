#include "Primes.h"
#include <iostream>

int p22() {

	int primeCount = 0;
	for (int i = 2; i <= 100000; i++) {
		if (isPrime(i)) {
			std::cout << "Prime #" << ++primeCount << ": " << i << std::endl;
		}
	}

	return 0;
}