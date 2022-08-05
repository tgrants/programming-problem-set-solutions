#include <string>
#include <regex>

using namespace std;

int getCount(string inputStr){
	regex re("[aeiou]");
	auto str_begin = sregex_iterator(inputStr.begin(), inputStr.end(), re);
	auto str_end = sregex_iterator();
	return distance(str_begin, str_end);
}
