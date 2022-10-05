#include <string>
#include <regex>

std::string DNAtoRNA(std::string dna) {
	return std::regex_replace(dna, std::regex("T"), "U");
}