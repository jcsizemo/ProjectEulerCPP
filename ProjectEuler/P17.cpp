#include <cmath>
#include <string>

std::string nums[] = { "", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "ELEVEN", "TWELVE", "THIRTEEN", "FOURTEEN",
						"FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINETEEN"};
std::string twoDigits[] = {"","","TWENTY","THIRTY","FORTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY"};

int getCount(int n) {
	
	std::string str = "";

	for (int digits = (int)floor(log10(n)) + 1, powOfOneHundred = (int)pow(10, digits - 1); n != 0 && digits > 2; n %= powOfOneHundred, powOfOneHundred /= 10, digits--) {
		str += nums[n / powOfOneHundred];

		if (digits == 4) str += "THOUSAND";
		else str += "HUNDRED";

		if (n % powOfOneHundred != 0) str += "AND";
	}

	if (n >= 20) str += twoDigits[n / 10] + nums[n % 10];
	else str += nums[n];

	return str.size();
}

int p17() {

	int sum = 0;

	for (int i = 1; i <= 1000; i++) sum += getCount(i);

	return sum;
}