#include <string>
#include <vector>

std::vector<int> digitize(int n) {
	std::vector<int> result;
	do { result.insert(result.begin(), n % 10); } while (n /= 10);
	return result;
}