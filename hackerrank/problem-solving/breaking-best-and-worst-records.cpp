#include <iostream>
#include <limits.h>

int main() {
	int n, pm = INT_MIN, pl = INT_MAX, cm = -1, cl = -1;
	std::cin >> n;
	while(n) {
		int c;
		std::cin >> c;
		if (c > pm) {
			pm = c;
			cm++;
		}
		if (c < pl) {
			pl = c;
			cl++;
		}
		n--;
	}
	std::cout << cm << " " << cl << std::endl;
}
