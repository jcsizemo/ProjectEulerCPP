#include "BigInteger.h"
#include <string>

unsigned long p16() {

	BigInteger bi = BigInteger("2");
	bi = bi.pow(1000);
	std::string str = bi.toString();
	unsigned long sum = 0;
	for (unsigned int i = 0; i < str.size(); i++) {
		sum += str[i] - '0';
	}
	return sum;
}