#include <sstream>
#include <string>
#include <vector>

std::string highAndLow(const std::string& numbers) {
	std::vector<int> v;
	std::istringstream iss(numbers);
	std::string n;
	int low = 0, high = 0;
	for (int i = 0; iss >> n; i++) {
		v.push_back(std::stoi(n));
		if (v[i] < v[low]) low = i;
		if (v[i] > v[high]) high = i;
	}
	return std::to_string(v[high]) + " " + std::to_string(v[low]);
}