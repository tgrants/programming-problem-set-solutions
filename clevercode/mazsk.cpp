#include <algorithm>
#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;
	std::sort(str.begin(), str.end());
	int fd = std::min(str.find_first_not_of('0'), str.size() - 1);
	str.erase(0, fd);
	str.insert(1, fd, '0');
	std::cout << str;
}
