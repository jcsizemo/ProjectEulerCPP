#include <iostream>
#include <vector>
#include <cmath>

int getFactors(int n) {

	int factors = 2;
	double root = sqrt(n);
	if (root == n/root) factors--;
	for (int i = 2; i <= (int) root; i++) {
		if (n % i == 0) factors += 2;
	}

	return factors;
}

int p12() {

	int tri = 0;

	for (int i = 2, numDivisors = 0; numDivisors < 500; i++) {
		tri = i*(i + 1) / 2;
		numDivisors = getFactors(tri);
	}

	return tri;
}