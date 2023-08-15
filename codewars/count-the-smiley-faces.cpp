#include <regex>
#include <vector>

int countSmileys(std::vector<std::string> arr) {
	int count =  0;
	std::regex re("[:;][\\-~]?[D\\)]");
	for (auto elem : arr) if (std::regex_match(elem, re)) count++;
	return count;
}