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