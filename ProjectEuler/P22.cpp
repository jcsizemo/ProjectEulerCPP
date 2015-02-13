#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

int p22() {

	std::ifstream input("p022_names.txt");
	std::string value;
	std::vector<std::string> names;

	while (std::getline(input, value, ',')) {
		value.erase(std::remove(value.begin(), value.end(), '\"'), value.end());
		names.push_back(value);
	}

	std::sort(names.begin(), names.end());
	int scoreSum = 0;

	for (int i = 0; i < (int)names.size(); i++) {

		std::string name = names[i];
		int score = 0;

		for (int j = 0; j < (int)name.size(); j++) score += ((int)name[j]) - 64;

		scoreSum += score * (i + 1);
	}

	input.close();

	return scoreSum;
}