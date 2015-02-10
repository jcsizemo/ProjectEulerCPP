#include "BigInteger.h"

int p20() {

	BigInteger bi = BigInteger(1);
	for (int i = 2; i <= 100; i++) bi = bi.times(i);
	std::string str = bi.toString();
	int sum = 0;
	for (int i = 0; i < (int)str.size(); i++) sum += str[i] - '0';
	return sum;
}