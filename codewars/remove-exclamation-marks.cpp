#include <regex>
#include <string>

std::string removeExclamationMarks(std::string str){
	return std::regex_replace(str, std::regex("!"), "");
}