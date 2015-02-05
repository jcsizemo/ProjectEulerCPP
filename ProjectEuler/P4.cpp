#include <cmath>
#include <cstdlib>
#include <string>
#include <sstream>

bool isPalindrome(int product) {
	int length = (int) ceil(log10(product));
	std::stringstream ss;
	ss << product;
	std::string n = ss.str();
	for (unsigned int i = 0; i < n.length() / 2; i++) {
		if (n[i] != n[length - i - 1]) return false;
	}

	return true;
}

int p4() {

	int maxProduct = 0;

	for (int i = 999; i >= 100; i--) {
		if (i * 999 < maxProduct) {
			return maxProduct;
		}
		for (int j = 999; j >= 100; j--) {
			int product = i*j;
			if (isPalindrome(product) && maxProduct < product) maxProduct = product;
		}
	}

	return maxProduct;
}