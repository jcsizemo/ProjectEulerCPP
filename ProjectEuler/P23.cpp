#include <vector>
#include <cmath>
#include <cassert>

int p23() {

	std::vector<int> divSums(28124, 1);
	std::vector<bool> sumOfTwoAbundants(28124*2, false);
	std::vector<int> abundants;

	int sum = 1;

	for (int i = 2; i < divSums.size(); i++) {
		if (divSums[i] > i) {
			abundants.push_back(i);
			sumOfTwoAbundants[i*2] = true;
			for (int abundant : abundants) sumOfTwoAbundants[i + abundant] = true;
		}
		if (!sumOfTwoAbundants[i]) sum += i;

		for (int j = 2 * i; j < divSums.size(); j += i) {
			divSums[j] += i;
		}
	}

	return sum;
}