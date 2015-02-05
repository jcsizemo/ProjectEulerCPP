#include "Primes.h"

int p3() {
	long long n = 600851475143;
	while (n % 3 == 0) n /= 3;
	std::vector<int> primes = getPrimes(10000);
	
	for (std::vector<int>::iterator it = primes.begin(); it != primes.end(); ++it) {
		int prime = *it;
		while (n % prime == 0) {
			n /= prime;
		}
		if (n == 1) return prime;
	}
	return 0;
}