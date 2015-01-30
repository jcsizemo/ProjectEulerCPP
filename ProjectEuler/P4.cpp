#include <cmath>
#include <cstdlib>
#include <string>
#include <iostream>

bool isPalindrome(int product) {
	int length = ceil(log10(product));
	std::string n = std::to_string(product);
	for (int i = 0; i < n.length() / 2; i++) {
		if (n[i] != n[length - i - 1]) return false;
	}

	return true;
}

int p4() {

	int n1 = 999;

	while (n1 >= 100) {
		for (int n2 = 999, product = n1*n2; n2 >= n1; n2--, product = n1*n2) {
			std::cout << n1 << "," << n2 << std::endl;
			if (isPalindrome(product)) return product;
		}
		n1--;
	}

	return 0;
}