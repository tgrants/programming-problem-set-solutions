#include <iostream>
#include <string>

int main() {
	std::string a;
	std::cin >> a;
	for (int i = 0; i < a.size(); i++) {
		if(a[i] < 'D')
			a[i] += 23;
		else
			a[i] -= 3;
	}
	std::cout << a;
}
