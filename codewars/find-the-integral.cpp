#include <string>

std::string integrate(const int& coefficient, const int& exponent){
	return std::to_string(coefficient / (exponent + 1)) + "x^" + std::to_string(exponent + 1);
}