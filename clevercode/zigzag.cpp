#include <iostream>
#include <string>

int main() {
	std::string a, b, c, d;
	std::cin >> a;
	for(int i = 0; i < a.size(); i++) {
		if (i % 4 == 0)
			b += a[i];
		else if ((i + 2) % 4 == 0)
			d += a[i];
		else
			c += a[i];
	}
	std::cout << b + c + d;
}
