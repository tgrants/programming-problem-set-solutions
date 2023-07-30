#include <sstream>
#include <string>

std::string createPhoneNumber(const int arr[10]) {
	std::ostringstream os;
	for (int i = 0; i < 10; i++) {
		switch (i) {
		case 0:
			os << '(';
			break;
		case 3:
			os << ") ";
			break;
		case 6:
			os << '-';
			break;
		}
		os << arr[i];
	}
	return os.str();
}