#include <iostream>
#include <string>

int main() {
	std::string a;
	char b, c;
	std::cin >> a >> b >> c;
	for(int i = 0; i < a.length(); i++) {
		if(a[i] == b)
			a[i] = c;
	}
	std::cout << a;
}
