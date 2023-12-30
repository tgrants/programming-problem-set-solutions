#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;
	int i = 0, j = 0;
	for (; i < 5 && s[j] != 0; j++)
		if ("hello"[i] == s[j]) i++;
	std::cout << (i == 5 ? "YES" : "NO") << std::endl;
}