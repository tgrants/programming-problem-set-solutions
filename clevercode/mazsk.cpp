// WORK-IN-PROGRESS, NOT SUBMITTED

#include <algorithm>
#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;
	std::sort(str.begin(), str.end());
	str.erase(0, std::min(str.find_first_not_of('0'), str.size() - 1));
	std::cout << str;
	// Need to include 0's in the result
}
