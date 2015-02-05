#include <iostream>
#include <vector>
#include "Primes.h"

const int size = 10000000;

std::vector<int> factors(size);
std::vector<int> primes;

int getFactors(int n) {

	if (n == 1) return 0;
	if (factors[n] != factors[n]) return factors[n];

	int index = 0;
	int prime = 2;

	while (n != prime && n % prime != 0) prime = primes[++index];

	if (n % prime == 0) {
		factors[n] = 2 + getFactors(n / prime);
		return factors[n];
	}
}

int p12() {

	int i = 2;

	primes = getPrimes(size);

	for (int numDivisors = 0; numDivisors < 500; i++) {
		int tri = i*(i + 1) / 2;
		numDivisors = getFactors(tri);
	}

	return i * (i+1) / 2;
}