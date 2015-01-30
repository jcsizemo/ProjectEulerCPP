int p2() {

	int fib1 = 1;
	int fib2 = 1;

	int sum = 0;

	while (fib1 < 4000000) {

		if (fib1 % 2 == 0) sum += fib1;

		int temp = fib1;
		fib1 += fib2;
		fib2 = temp;
	}

	return sum;
}