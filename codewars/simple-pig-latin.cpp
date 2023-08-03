#include <algorithm>
#include <sstream>
#include <string>

std::string pig_it(std::string str) {
	std::stringstream iss(str), oss;
	std::string word;
	for (int i = 0; iss >> word; i++) {
		if (i) oss << ' ';
		if (std::string(".,?!").find(word) != std::string::npos) {
			oss << word;
			continue;
		}
		std::rotate(word.begin(), word.begin() + 1, word.end());
		oss << word << "ay";
	}
	return oss.str();
}