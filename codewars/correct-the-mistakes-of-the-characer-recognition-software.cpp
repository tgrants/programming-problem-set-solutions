#include <string>

std::string correct(std::string str){
	for (int i = 0; i < str.length(); i++) {
		switch (str[i]) {
			case '0': str[i] = 'O'; break;
			case '1': str[i] = 'I'; break;
			case '5': str[i] ='S'; break;
		}
	}
	return str;
}