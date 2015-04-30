#include "BigInteger.h"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cmath>

BigInteger::BigInteger(long n)
{
	this->nums.push_back(n);
}

BigInteger::BigInteger(std::string n)
{
	int sum = 0;
	int index = 0;
	for (int i = (int) n.size() - 1, exp = 1; i >= 0; i--, exp *= 10) {

		if (exp >= BASE) {
			nums.push_back(sum % BASE);
			//nums[index++] = sum % BASE;
			sum /= BASE;
			exp = 1;
		}
		sum += (n[i] - '0') * exp;
		if (sum >= BASE) {
			nums.push_back(sum % BASE);
			//nums[index++] = sum % BASE;
			sum /= BASE;
		}
	}
	nums.push_back(sum);
	//nums[index] += sum;
}

BigInteger::~BigInteger()
{
}

BigInteger BigInteger::add(BigInteger bi) {

	int carry = 0;
	unsigned int index = 0;

	BigInteger bigger = (this->nums.size() >= bi.nums.size()) ? *this : bi;

	for (; index < std::min(this->nums.size(), bi.nums.size()); index++) {

		int sum =  this->nums[index] + bi.nums[index] + carry;
		carry = 0;
		if (sum >= BASE) {
			carry = sum / BASE;
			sum %= BASE;
		}
		bigger.nums[index] = sum;
	}

	while (carry != 0) {

		if (index < bigger.nums.size()) {
			int sum = bigger.nums[index] + carry;
			carry = 0;
			if (sum >= BASE) carry = sum / BASE;
			bigger.nums[index++] = sum % BASE;
		}
		else {
			bigger.nums.push_back(carry);
			carry = 0;
		}

	}

	return bigger;
}

BigInteger BigInteger::subtract(BigInteger bi) {
	return bi;
}

BigInteger BigInteger::times(BigInteger bi) {
	int carry = 0;
	unsigned int index = 0;

	BigInteger bigger = (this->nums.size() >= bi.nums.size()) ? *this : bi;

	for (; index < bigger.nums.size(); index++) {

		int product = (this->nums[index] * bi.nums[0]) + carry;
		carry = 0;
		if (product >= BASE) {
			carry = product / BASE;
			product %= BASE;
		}
		bigger.nums[index] = product;
	}

	while (carry != 0) {

		if (index < bigger.nums.size()) {
			int sum = bigger.nums[index] + carry;
			carry = 0;
			if (sum >= BASE) {
				carry = sum / BASE;
				bigger.nums[index++] = sum % BASE;
			}
		}
		else {
			bigger.nums.push_back(carry);
			carry = 0;
		}

	}

	return bigger;
}

BigInteger BigInteger::divide(BigInteger bi) {
	return bi;
}

BigInteger BigInteger::pow(int exp) {
	BigInteger bi = *this;
	BigInteger bi2 = *this;
	for (int i = 1; i < exp; i++) {
		bi = bi.times(bi2);
	}
	return bi;
}

std::vector<long> BigInteger::values() {
	return this->nums;
}

int BigInteger::size() {
	int size = 1 + (int) log10(nums[nums.size() - 1]);
	if (nums.size() > 1) size += (nums.size() - 1) * 4;
	return size;
}

std::string BigInteger::toString() {
	std::stringstream ss;
	ss << this->nums[nums.size() - 1];

	for (int i = (int) this->nums.size() - 2; i >= 0; i--) {
		if (this->nums[i] == 0) ss << "0000";
		else
			for (int n = this->nums[i]; n < 1000; n *= 10) ss << "0";
		ss << this->nums[i];
	}
	return ss.str();
}
