#include "Primes.h"
#include <vector>
#include <cmath>

int p21() {
	std::vector<bool> notprimes = getNotprimes(100000);

	std::vector<int> divisorSums(100000);

	for (int i = 2; i < (int) divisorSums.size(); i++) {

		int sum = 1;

		if (notprimes[i]) {
			for (int j = 2; j <= (int)sqrt(i); j++) {
				if (i % j == 0) {
					sum += j;
					if (j != i/j) sum += (i / j);
				}
			}
		}

		divisorSums[i] = sum;
	}

	int sum = 0;

	for (int i = 2; i < 10000; i++) {
		if (!notprimes[i]) continue;
		if (!notprimes[divisorSums[i]]) continue;
		if (divisorSums[divisorSums[i]] == i && i != divisorSums[i]) sum += i;
	}

	return sum;
}