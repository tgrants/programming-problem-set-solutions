#include <string>

std::string bonus_time(int salary, bool bonus) {
	return '$' + std::to_string(bonus ? salary * 10 : salary);
}