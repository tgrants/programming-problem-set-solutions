#include <cmath>

int buses(const int kids, const int adults, const int places) {
	if ((places < 3 && kids) || adults < 2) return 0;
	if (kids && adults / 2 * (float)(places - 2) < kids) return 0;
	return std::ceil((float)(kids + adults) / places);
}