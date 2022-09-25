// WORK-IN-PROGRESS, NOT SUBMITTED

#include <string>

std::string format_duration(int s) {
	int pos = 0, units[] = {31536000, 86400, 3600, 60, s};
	std::string names[] = {"year", "day", "hour", "minute", "second"};
	for (int i = 0; i < 4; i++) {
		int temp = units[4] / units[i];
		if (temp > 0)
			pos++;
		units[4] %= units[i];
		units[i] = temp;
	}
	if (pos == 0 && units[4] == 0)
		return "now";
	std::string res = "";
	for (int i = 0; i < 5; i++) {
		if (units[i] >= 1) {
			// TODO
			if (i - pos == 0)
				res += ", ";
			else if (pos - i != 0 && pos > 1)
				res += " and ";
			res += std::to_string(units[i]) + ' ' + names[i];
			if (units[i] > 1)
				res += 's';
		}
	}
	return res;
}