#include <vector>

std::vector<int> tribonacci(std::vector<int> signature, int n) {
	if (n < 3) return {signature.begin(), signature.begin() + n};
	std::vector<int> result = signature;
	for (int i = 3; i < n; i++)
		result.push_back(result[i - 3] + result[i - 2] + result[i - 1]);
	return result;
}