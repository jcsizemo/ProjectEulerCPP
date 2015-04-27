#include <cmath>
#include <vector>
#include <set>

#define LIMIT 1000000

unsigned int p24() {

	int numPermutation = 0;

	int power = 9;
	unsigned int answer = 0;
	std::set<int> added;
	
	while (power != -1) {
		int step = 1;
		for (int i = 1; i <= power; i++) step *= i;

		int count = 0;
		while (added.count(count) != 0) count++;

		while (numPermutation + step < LIMIT) {
			numPermutation += step;
			count++;
			while (added.count(count) != 0) count++;
		}

		answer += count * (int) pow(10, power);
		added.insert(count);
		power--;
	}

	return answer;
}