#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int y) {
	return {
		y,
		(y > 0) * 15 + (y > 1) * 9 + (y > 2) * (y - 2) * 4,
		(y > 0) * 15 + (y > 1) * 9 + (y > 2) * (y - 2) * 5
	};
}