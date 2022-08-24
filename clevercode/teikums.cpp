#include <iostream>
#include <string>

int main() {
	std::string str, fword;
	std::getline(std::cin, str);

	int size = str.size(), acount = 0, wcount = 1;
	for (int i = 0; i < size; i++) {
		if(str[i] == 'a' || str[i] == 'A')
			acount++;
		else if(str[i] == ' ') {
			if(wcount == 1)
				fword = std::string(str.begin(), str.begin() + i);
			wcount++;
		}
	}

	std::cout
		<< size << "\n"
		<< str[0] << "\n"
		<< str[size - 2] << "\n"
		<< acount << "\n"
		<< wcount << "\n"
		<< fword << std::endl;
}
