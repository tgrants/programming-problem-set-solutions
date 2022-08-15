// WORK IN PROGRESS - NOT SUBMITTED

#include <iostream>
#include <string>

int main() {
	std::string a, b;
	std::cin >> a >> b;
	for (char cb : b) {
		bool contains = false;
		for (char ca : a) {
			if (cb == ca) {
				contains = true;
				break;
			}
		}
		if (!contains) {
			std::cout << "Nevar";
			return 0;
		}
	}
	std::cout << "Var";
}
