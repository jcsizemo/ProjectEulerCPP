int p6() {

	int regularSum = 0;
	int squaredSum = 0;

	for (int i = 1; i <= 100; i++) {
		squaredSum += i*i;
		regularSum += i;
	}

	return regularSum*regularSum - squaredSum;
}