#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

int sumOfDigits(long n) {
	int s = 0;
	do { s += n % 10; } while (n /= 10);
	return s;
}

class WeightSort {
	public:
		static std::string orderWeight(const std::string &in) {
		std::stringstream iss(in), oss;
		std::vector<long> out((std::istream_iterator<long>(iss)), (std::istream_iterator<long>()));
		std::sort(out.begin(), out.end(), [](long a, long b) {
			int sa = sumOfDigits(a), sb = sumOfDigits(b);
			if (sa == sb) return std::to_string(a).compare(std::to_string(b)) < 0;
			else return sa < sb;
		});
		for (int i = 0; i < out.size(); i++) oss << (i ? " " : "") << out[i];
		return oss.str();
	}
};
