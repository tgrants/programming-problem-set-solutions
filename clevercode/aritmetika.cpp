#include <iostream>
#include <string>

int main() {
	std::string eq;
	std::cin >> eq;
	int res = 0, wp = 0;
	for (int i = 0; i <= eq.size(); i++) {
		if (eq[i] == '+' || eq[i] == '-'|| i == eq.size()) {
			res += std::stoi(eq.substr(wp, i - wp));
			wp = i;
		}
	}
	std::cout << res << std::endl;
}
