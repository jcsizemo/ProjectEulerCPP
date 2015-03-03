#include <cmath>
#include <list>

unsigned long long computeFib(int n) {
	unsigned long long f1 = 1;
	unsigned long long f2 = 1;

	for (int i = 2; i < n; i++) {
		unsigned long long temp = f2;
		f2 = f1 + f2;
		f1 = temp;
	}

	return f2;
}

int computeRange(int r, int n) {
	return 0;
}

unsigned long long fib(int n) {
	double phi = (1 + sqrt(5)) / 2;
	double logphi = log10(phi);
	double a = (logphi * n);
	double b = (log10(5) / 2);
	double answer = a - b;

	double exponent = floor(answer);
	double base = pow(10, answer - exponent);

	return 0;
}


// iterative approach to save on stack space, although
// this is likely unnecessary given this algorithm
// is O(lgn) and you'd be scrolling well past your
// 100th birthday before you'd see a problem
long long int fastDouble(int n) {

	// stack
	std::list<bool> odds;

	if (n < 2) return 1;

	for (; n != 1; n /= 2) {
		if (n % 2 == 0) odds.push_front(false);
		else odds.push_front(true);
	}

	long long int f1 = 1;
	long long int f2 = 1;

	while (!odds.empty()) {
		bool odd = odds.front();
		odds.pop_front();
		long long int temp = f1*f1 + f2*f2;
		f1 = f1*(2 * f2 - f1);
		if (odd) {
			f2 = f1 + temp;
			f1 = temp;
		}
		else {
			f2 = temp;
		}
	}

	return f1;
}