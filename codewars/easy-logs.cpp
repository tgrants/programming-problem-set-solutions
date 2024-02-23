// easy logs
// Clang 8 C++17

#include <cmath>

double EasyLogs(double x, double a, double b){
	return std::log(a * b) / std::log(x);
}