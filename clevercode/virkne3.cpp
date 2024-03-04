#include <iostream>
#include <string>

int main() {
	std::string in, out;
	std::cin >> in;

	for (int i = 0; i < in.size(); i++)
		if (i == in.size() - 1 || in[i] != in[i + 1]) out += in[i];

	std::cout << out << std::endl;
}
