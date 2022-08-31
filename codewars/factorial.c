#include <limits.h>

int factorial(int n) {
	long res = 1;
	while (n) {
		res *= n;
		if (res > INT_MAX)
			return -1;
		n--;
	}
	return res;
}
