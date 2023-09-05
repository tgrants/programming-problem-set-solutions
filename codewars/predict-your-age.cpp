#include <cmath>

int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8) {
	int sum = 0, ages[] = {age1, age2, age3, age4, age5, age6, age7, age8};
	for (int i = 0; i < 8; i++) sum += ages[i] * ages[i];
	return std::sqrt(sum) / 2;
}