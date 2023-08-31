#include <string>

class SequenceSum {
	int count;
	public:
	SequenceSum (int);
	std::string showSequence();
};

std::string SequenceSum::showSequence() {
	int sum = 0, c = SequenceSum::count;
	std::string res = "0";
	if (c <= 0) return std::to_string(c) + (c < 0 ? "<" : "=") + res;
	for (int i = 1; i <= c; sum += i++)
		res += "+" + std::to_string(i);
	return res + " = " + std::to_string(sum);
}

SequenceSum::SequenceSum (int c) {
	count = c;
}