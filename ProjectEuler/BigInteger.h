#include <string>
#include <vector>

#define MAX 0x7fffffff

class BigInteger
{
public:
	BigInteger(long n);
	BigInteger(std::string n);
	~BigInteger();
	BigInteger add(BigInteger bi);
	BigInteger subtract(BigInteger bi);
	BigInteger times(BigInteger bi);
	BigInteger divide(BigInteger bi);
	BigInteger raise(BigInteger bi);
	std::vector<long> values();
	std::string toString();

private:
	std::vector<long> nums;
};

