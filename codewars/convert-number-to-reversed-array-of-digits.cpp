#include <vector>

std::vector<int> digitize(unsigned long n) {        
	std::vector<int> result;
	do result.push_back(n % 10);
	while (n /= 10);
	return result;
}