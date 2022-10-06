#include <vector>
#include <string>

std::string howManyDalmatians(int number) {
	switch (number) {
		case 0 ... 10: return "Hardly any";
		case 11 ... 50: return "More than a handful!";
		case 51 ... 100: return "Woah that's a lot of dogs!";
		case 101: return "101 DALMATIONS!!!";
	}
}