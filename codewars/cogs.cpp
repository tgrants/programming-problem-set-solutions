#include <vector>

double cog_rpm(const std::vector<int> &cogs) {
	float rpm = 1;
	for (int i = 0; i < cogs.size() - 1; i++)
		rpm *= (float)-cogs[i]/cogs[i + 1];
	return rpm;
}

// Simpler solution: cogs.front() / cogs.back()