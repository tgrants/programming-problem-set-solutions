#include <vector>

double calcAverage(const std::vector<int>& values) {
	double sum = 0;
	for (int i : values)
		sum += i;
	return sum / values.size();
}