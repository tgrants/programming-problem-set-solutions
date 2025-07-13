// Basic Mathematical Operations
// https://www.codewars.com/kata/57356c55867b9b7a60000bd7
// 8kyu, Clang 8 C++17

int basicOp(char op, int a, int b) {
	if (op < 44) return op == 42 ? a * b : a + b;
	else return op == 47 ? a / b : a - b;
}
