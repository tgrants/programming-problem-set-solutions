// WORK IN PROGRESS - NOT SUBMITTED

#include <iostream>
#include <string>

int main() {
	std::string a, b;
	std::cin >> a >> b;
	for (char cb : b) {
		int contains = 0;
		for (char ca : a) {
			if (cb == ca) {
				contains++;
				break;
			}
		}
		if (contains == 0) {
			std::cout << "Nevar";
			return 0;
		}
	}
	std::cout << "Var";
	return 1;
}
