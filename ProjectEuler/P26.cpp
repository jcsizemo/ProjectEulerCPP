#include <vector>

int p26() {

	int sequenceLength = 0;
	int largestIndex = 0;

	for (int i = 1000; i > 1; i--) {
		if (sequenceLength >= i) {
			break;
		}

		std::vector<int> foundRemainders(i);
		int value = 1;
		int position = 0;

		while (foundRemainders[value] == 0 && value != 0) {
			foundRemainders[value] = position;
			value *= 10;
			value %= i;
			position++;
		}

		if (position - foundRemainders[value] > sequenceLength) {
			sequenceLength = position - foundRemainders[value];
			largestIndex = i;
		}
	}

	return largestIndex;
}