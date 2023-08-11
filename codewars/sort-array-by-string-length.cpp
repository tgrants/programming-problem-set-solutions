#include <algorithm>
#include <string>
#include <vector>

class Kata {
public:
	std::vector<std::string> sortByLength(std::vector<std::string> array) {
		std::sort(array.begin(), array.end(), [](std::string a, std::string b) { 
			return a.length() < b.length();
		});
		return array;
	}
};