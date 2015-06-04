#include <map>
#include "ModExponentiation.h"

int p26() {

	// solution partially derived from the Wolfram MathWorld page on decimal expansion

	int largest = -1;
	int largestCycle = -1;

	for (int m = 1000; m > 1 && m >= largestCycle; m--) {

		std::map<int, int> mods;
		int e = 0;
		int mod = modularExponentiation(10, e, m);
		while (mods.find(mod) == mods.end()) {
			mods.insert(std::pair<int,int>(mod, e++));
			mod = modularExponentiation(10, e, m);
		}

		int cycleLength = e - mods[mod];
		if (largestCycle < cycleLength) {
			largestCycle = cycleLength;
			largest = m;
		}

	}

	return largest;
}