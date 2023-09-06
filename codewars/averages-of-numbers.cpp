#include <vector>

std::vector<double> averages(std::vector<int> numbers) {
	std::vector<double> result;
	for (int i = 0; i + 1 < numbers.size(); i++)
		result.push_back((numbers[i] + numbers[i + 1]) / 2.0);
	return result;
}