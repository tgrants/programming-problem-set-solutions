// WORK-IN-PROGRESS, NOT SUBMITTED

#include <stdlib.h>

char* generate_shape(int n) {
	int size = n * n + n - 1;
	char* r = malloc(size * sizeof(char));
	for (int i = 0; i < size; i++) {
		if (i % (n + 1))
			r[i] = '+';
		else
			r[i] = '\n';
	}
	return r;
}
