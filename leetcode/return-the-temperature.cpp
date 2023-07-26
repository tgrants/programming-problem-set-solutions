#include <vector>

class Solution {
public:
	std::vector<double> convertTemperature(double celsius) {
		return std::vector<double> {celsius + 273.15, celsius * 1.8 + 32};
	}
};