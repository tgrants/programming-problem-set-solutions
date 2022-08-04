#include <string>
#include <regex>

std::string disemvowel(const std::string& str) {
    return std::regex_replace(str, std::regex("a|e|i|o|u|A|E|I|O|U"), "");
}
