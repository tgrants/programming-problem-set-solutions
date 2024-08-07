#include <iostream>
#include <unordered_map>

int main() {
	int n;
	std::cin >> n;
	std::unordered_map<int, int> hash;

	for (int i = 0; i < n; i++) {
		int m;
		std::cin >> m;
		hash[m]++;
	}

	int maxCount = 0;
	for (auto i : hash)
		if (maxCount < i.second)
			maxCount = i.second;

	std::cout << maxCount << std::endl;
}
