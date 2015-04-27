#include "BigInteger.h"

int p25() {
	BigInteger f1(1);
	BigInteger f2(1);

	int count = 1;

	while (f1.size() < 1000) {
		BigInteger temp = f2;
		f2 = f2.add(f1);
		f1 = temp;
		count++;
	}

	return count;
}