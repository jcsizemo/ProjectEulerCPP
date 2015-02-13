#include "Primes.h"
#include <cstdlib>
#include <ctime>

std::vector<bool> getNotprimes(unsigned long limit) {
	
	std::vector<bool> notprimes(limit + 1);
	notprimes[0] = true;
	notprimes[1] = true;

	for (unsigned int i = 2; i <= limit; i++)
		for (unsigned int j = 2 * i; j <= limit; j += i)
			notprimes[j] = true;

	return notprimes;
	
}

std::vector<int> getPrimes(unsigned long limit) {

	std::vector<bool> notprimes(limit + 1);
	std::vector<int> primes;
	notprimes[0] = true;
	notprimes[1] = true;

	for (unsigned int i = 2; i <= limit; i++) {
		for (unsigned int j = 2 * i; j <= limit; j += i)
			notprimes[j] = true;

		if (!notprimes[i]) primes.push_back(i);
	}

	return primes;
}

int modExp(int b, int e, int m) {

	int c = 1;
	int e2 = 0;
	while (e2 < e) {
		c = ((unsigned long long) b*c) % m;
		e2++;
	}
	return c;
}

bool isPrime(int n) {

	if (n == 2) return true;
	if (n < 2 || n % 2 == 0) return false;

	srand((unsigned int) time(NULL));

	int s = 0;
	int d = n - 1;
	while (d % 2 == 0) {
		s++;
		d /= 2;
	}

	for (int i = 0; i < 20; i++) {
		int a = (rand() % (n - 4)) + 2;
		int x = modExp(a, d, n);

		if (x == 1 || x == n - 1) continue;

		bool doNext = false;
		for (int i = 1; i < s && !doNext; i++) {
			x = modExp(x, 2, n);
			if (x == 1) return false;
			else if (x == n - 1) doNext = true;
		}
		if (!doNext) return false;
	}

	return true;


}