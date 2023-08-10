#include <string>

std::string replaceAll(std::string str) {
	return str.substr(0, str.find('#'));
}