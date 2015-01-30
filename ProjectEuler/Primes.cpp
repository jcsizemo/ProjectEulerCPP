#include "Primes.h"

std::vector<bool> getNotprimes(unsigned long limit) {
	
	std::vector<bool> notprimes(limit + 1);
	notprimes[0] = true;
	notprimes[1] = true;

	for (int i = 2; i <= limit; i++)
		for (int j = 2 * i; j <= limit; j += i)
			notprimes[j] = true;

	return notprimes;
	
}

std::vector<int> getPrimes(unsigned long limit) {

	std::vector<bool> notprimes(limit + 1);
	std::vector<int> primes;
	notprimes[0] = true;
	notprimes[1] = true;

	for (int i = 2; i <= limit; i++) {
		for (int j = 2 * i; j <= limit; j += i)
			notprimes[j] = true;

		if (!notprimes[i]) primes.push_back(i);
	}

	return primes;
}