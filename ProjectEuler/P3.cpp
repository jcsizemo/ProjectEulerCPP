#include "Primes.h"

int p3() {
	unsigned long n = 600851475143;
	while (n % 3 == 0) n /= 3;
	std::vector<int> primes = getPrimes(n);
	for (int i = primes.size() - 1; i >= 0; i--) {
		if (n % primes[i] == 0) return primes[i];
	}
}