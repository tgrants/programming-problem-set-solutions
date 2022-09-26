#include <stddef.h>

typedef struct { size_t i, j; } coords;

coords bug_in_apple(size_t m, size_t n, const char apple[m][n]) {
	for (size_t i = 0; i < m; i++)
		for (size_t j = 0; j < n; j++)
			if (apple[i][j] == 'B')
				return (coords){i, j};
}