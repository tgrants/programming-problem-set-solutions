// Area of a Square
// https://www.codewars.com/kata/5748838ce2fab90b86001b1a
// 8kyu, Clang 8 C++17

#include <cmath>

double square_area(double A) {
	return std::round(std::pow(A * 2 / M_PI, 2) * 100) / 100;
};
