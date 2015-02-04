#include <cmath>

int p9() {

	//int limit = (int) floor(sqrt(1000));
	int squares[1000] = {}; //init to zeroes
	for (int i = 1; i < 1000; i++) {
		squares[i] = i*i;
	}

	int product = 0;

	for (int i = 1; i < 1000 && !product; i++) {
		for (int j = i + 1; j < 1000 && !product; j++) {

			int k = 1000 - i - j;
			if (squares[i] + squares[j] == squares[k]) product = i*j*k;
		}
	}



	return product;
}