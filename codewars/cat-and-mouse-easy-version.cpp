#include <cmath>
#include <string>

std::string cat_mouse(std::string x) {
	return std::abs(int(x.find('C') - x.find('m'))) < 5 ? "Caught!" : "Escaped!";
}