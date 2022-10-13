#include <string>

unsigned int strCount(std::string word, char letter){
	unsigned count = 0;
	for (char c : word) if (c == letter) count++;
	return count;
}