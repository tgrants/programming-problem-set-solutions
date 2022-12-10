#include <cmath>

#define gallon 4.54609188
#define mile 1.609344

double converter(int mpg) {
	return std::floor((mpg * mile / gallon * 100.0) + 0.5) / 100.0;
}