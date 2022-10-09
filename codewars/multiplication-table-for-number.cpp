#include <string>

std::string multi_table(int number) {
	std::string res;
	for (int i = 1; i <= 10; i++) {
		res += std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(number * i);
		if (i != 10) res += '\n';
	}
	return res;
}