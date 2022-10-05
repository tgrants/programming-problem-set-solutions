#include <string>

int hexToDec(const std::string& hexString) {
	return std::stoi(hexString, nullptr, 16);
}