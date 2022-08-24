#include <iostream>
#include <string>

int main() {
	std::string rota, zigmars;
	std::cin >> rota >> zigmars;
	for (char z : zigmars) {
		bool contains = false;
		for (int i = 0; i < rota.size(); i++) {
			if(z == rota[i]) {
				rota.erase(i, 1);
				contains = true;
				break;
			}
		}
		if(!contains) {
			std::cout << "NEVAR";
			return 0;
		}
	}
	std::cout << "VAR";
}
