#include <iostream>
#include <iomanip>

int main() {
	int n, a = 0, b = 0, c = 0, d;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> d;
		if (d > 0)
			a++;
		else if (d < 0)
			b++;
		else
			c++;
	}
	std::cout << std::fixed << std::setprecision(6) <<
		(float)a / n << "\n" <<
		(float)b / n << "\n" <<
		(float)c / n << std::endl;
}
