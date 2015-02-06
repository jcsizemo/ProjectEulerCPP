#include <map>

std::map<unsigned long,unsigned long> collatz;

unsigned long getCollatz(unsigned long n) {

	if (collatz[n]) return collatz[n];
	else {
		if (n % 2 == 0) {
			collatz[n] = 1 + getCollatz(n/2);
		}
		else collatz[n] = 1 + getCollatz(3*n + 1);
		return collatz[n];
	}
}

unsigned long p14() {

	collatz[1] = 1;

	unsigned long max = 0;
	int index = 0;

	for (long long i = 1; i < 1000000; i++) {
		collatz[i] = getCollatz(i);
		if (collatz[i] > max) {
			max = collatz[i];
			index = i;
		}
	}

	return index;
}