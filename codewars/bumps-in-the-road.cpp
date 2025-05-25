// Bumps in the Road
// https://www.codewars.com/kata/57ed30dde7728215300005fa
// 7kyu, Clang 8 C++17

#include <algorithm>
#include <string>

std::string bumps(std::string road) {
	return std::count(road.begin(), road.end(), 'n') > 15 ? "Car Dead" : "Woohoo!";
}
