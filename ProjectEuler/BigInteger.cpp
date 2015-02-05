#include "BigInteger.h"
#include <cmath>
#include <iostream>

BigInteger::BigInteger(long n) : nums(500,0)
{
	this->nums.push_back(n);
}

BigInteger::BigInteger(std::string n) : nums(500,0)
{

	//"37107287533902102798797998220837590246510135740250"
	for (int i = (int) n.size() - 1, j = 0, exp = 1, zeroCount = 0; i >= 0; i--, exp *= 10) {
		long digit = (n[i] - '0') * exp;
		bool overflowExp = (exp > 1 && exp % 10 != 0);

		if (!overflowExp) {
			zeroCount = (digit) ? 0 : zeroCount + 1;
		}
			
		if (digit < 0 || nums[j] + digit < 0 || overflowExp) {
			exp = (int) pow(10,zeroCount);
			zeroCount = 0;
			digit = (n[i] - '0') * exp;
			j++;
		}
		nums[j] += digit;

	}
}

BigInteger::~BigInteger()
{
}

BigInteger BigInteger::add(BigInteger bi) {

	//unsigned long 
	//for (int i = 0; )
	return bi;
}

BigInteger BigInteger::subtract(BigInteger bi) {
	return bi;
}

BigInteger BigInteger::times(BigInteger bi) {
	return bi;
}

BigInteger BigInteger::divide(BigInteger bi) {
	return bi;
}

BigInteger BigInteger::raise(BigInteger bi) {
	return bi;
}

std::vector<long> BigInteger::values() {
	return this->nums;
}

std::string toString() {
	return "ASDAS";
}
