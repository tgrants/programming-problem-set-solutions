#include <stdio.h>

int main() {
	char v[20], a, b, i = 0;
	scanf("%s %c %c", &v, &a, &b);
	while(i < 20) {
		if(v[i] == a || v[i] == b)
			break;
		i++;
	}
	printf("%c", v[i]);
}
