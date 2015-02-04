#include "Primes.h"
#include <vector>

long long p10() {

	std::vector<int> primes = getPrimes(2000000);

	long long sum = 0;

	for (std::vector<int>::iterator it = primes.begin(); it != primes.end(); ++it) {
		sum += *it;
	}

	return sum;
}