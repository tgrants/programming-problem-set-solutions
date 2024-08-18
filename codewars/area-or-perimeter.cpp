// Area or Perimeter
// https://www.codewars.com/kata/5ab6538b379d20ad880000ab
// 8kyu, Clang 8 C++17

int area_or_perimeter(int l , int w) {
	return l == w ? l * w : 2 * l + 2 * w;
}
