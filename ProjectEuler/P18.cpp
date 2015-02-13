#include <vector>
#include <algorithm>

#define SIZE 15

int p18() {

	std::vector<std::vector<int> > pyramid;
	pyramid.push_back({ 75 });
	pyramid.push_back({ 95, 64 });
	pyramid.push_back({ 17, 47, 82 });
	pyramid.push_back({ 18, 35, 87, 10 });
	pyramid.push_back({ 20, 4, 82, 47, 65 });
	pyramid.push_back({ 19, 1, 23, 75, 3, 34 });
	pyramid.push_back({ 88, 2, 77, 73, 7, 63, 67 });
	pyramid.push_back({ 99, 65, 4, 28, 6, 16, 70, 92 });
	pyramid.push_back({ 41, 41, 26, 56, 83, 40, 80, 70, 33 });
	pyramid.push_back({ 41, 48, 72, 33, 47, 32, 37, 16, 94, 29 });
	pyramid.push_back({ 53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14 });
	pyramid.push_back({ 70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57 });
	pyramid.push_back({ 91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48 });
	pyramid.push_back({ 63, 66, 04, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31 });
	pyramid.push_back({ 4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23 });

	for (int i = SIZE-2; i >= 0; i--) {
		for (int j = 0; j < (int) pyramid[i].size(); j++) {
			pyramid[i][j] += std::max(pyramid[i + 1][j], pyramid[i + 1][j + 1]);
		}
	}
	return pyramid[0][0];
}