#include <string>
#include <sstream>

std::string reverse_words(const std::string& str) {
	std::istringstream iss(str);
	std::string res, subs;
	while (iss >> subs)
		res = (iss.rdbuf() -> in_avail() ? " " : "") + subs + res;
	return res;
}