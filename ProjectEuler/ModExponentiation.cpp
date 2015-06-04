int modularExponentiation(int b, int e, int m) {

	int c = 1;
	int ePrime = 0;

	while (ePrime < e) {
		ePrime++;
		c = (b*c) % m;
	}

	return c;
}