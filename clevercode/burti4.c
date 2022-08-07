#include <stdio.h>

int main() {
	char v[20], b, s = 0;
	scanf("%s", &v);
	scanf(" %c", &b);
	for(int i = 0; i < 20; i++) {
		if(v[i] == b)
			s++;
	}
	printf("%hhu", s);
}
