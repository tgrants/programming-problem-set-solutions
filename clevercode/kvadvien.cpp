#include <iostream>
#include <cmath>

int main() {
	int a, b, c, d;
	std::cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d > 0) {
		float x1 = (-b + sqrt(d)) / (2 * a);
		float x2 = (-b - sqrt(d)) / (2 * a);
		if (x1 > x2)
			std::swap(x1, x2);
		std::cout << x1 << "\n" << x2;
	}
	else if (d == 0)
		std::cout << -b / (2 * a);
	else
		std::cout << "nav";
	std::cout << std::endl;
}
