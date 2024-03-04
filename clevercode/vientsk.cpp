#include <iostream>
#include <map>

int main() {
	int n, k, p;
	std::map<int, int> m;

	std::cin >> n >> k;

	while (n--) {
		std::cin >> p;
		if (m.find(p) != m.end()) m[p]++;
		else m.insert(std::pair<int,int> (p, 1));
	}

	for (auto it = m.begin(); it != m.end(); it++) {
		if (it -> second == 1) {
			std::cout << it -> first << std::endl;
			break;
		}
	}
}
