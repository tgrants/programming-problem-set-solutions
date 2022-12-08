#include <string>

std::string format_duration(int s) {
	if (!s) return "now";
	
	int pos = s % 60 > 0, units[] = {31536000, 86400, 3600, 60, s};
	std::string names[] = {"year", "day", "hour", "minute", "second"};

	for (int i = 0; i < 4; i++) {
		int temp = units[4] / units[i];
		if (temp > 0) pos++;
		units[4] %= units[i];
		units[i] = temp;
	}
	
	std::string res = "";
	for (int i = 0; i < 5; i++) {
		if (units[i] > 0) {
			res += std::to_string(units[i]) + ' ' + names[i];
			if (units[i] > 1) res += 's';
			if (pos >= 2) res += (pos-- > 2) ? ", " : " and ";
		}
	}

	return res;
}