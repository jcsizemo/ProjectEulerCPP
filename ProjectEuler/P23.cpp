#include <vector>
#include <cmath>

int p23() {

	std::vector<int> divSums(28123, 1);
	for (int i = 1; i < 28123; i++) {
		for (int j = 2; j <= (int)sqrt(i); j++) {
			if (i % j == 0) {
				divSums[i] += j;
				divSums[i] += (i / j);
			}
		}
		if (sqrt(i) == floor(sqrt(i))) divSums[i] -= (int) sqrt(i);
	}

	return 0;
}