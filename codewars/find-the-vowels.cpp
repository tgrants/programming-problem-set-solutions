#include <string>
#include <vector>

std::vector<int> vowelIndices(const std::string& word) {
	std::vector<int> res;
	std::string vowels = "AEIOUYaeiouy";
	for (int i = 0; i < word.size(); i++) {
		for (char c : vowels) {
			if (word[i] != c) continue;
			res.push_back(i + 1);
		}
	}
	return res;
}