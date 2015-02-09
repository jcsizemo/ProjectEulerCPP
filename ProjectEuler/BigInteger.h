#include <string>
#include <vector>

class BigInteger
{
public:
	static const long BASE = 10000;
	BigInteger(long n);
	BigInteger(std::string n);
	~BigInteger();
	BigInteger add(BigInteger bi);
	BigInteger subtract(BigInteger bi);
	BigInteger times(BigInteger bi);
	BigInteger divide(BigInteger bi);
	BigInteger pow(int exp);
	std::vector<long> values();
	std::string toString();

private:
	std::vector<long> nums;
};

