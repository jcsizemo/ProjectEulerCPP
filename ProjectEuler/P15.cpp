#define SIZE 21

unsigned long p15() {

	unsigned long lattice[SIZE][SIZE] = {};

	for (int i = 0; i < SIZE; i++) {
		lattice[i][0] = 1;
		lattice[0][i] = 1;
	}

	for (int i = 1; i < SIZE; i++) {
		for (int j = 1; j < SIZE; j++) {
			lattice[i][j] = lattice[i-1][j] + lattice[i][j-1];
		}
	}

	return lattice[20][20];
}