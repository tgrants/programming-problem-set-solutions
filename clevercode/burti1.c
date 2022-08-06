#include <stdio.h>

int main() {
	char a[100];
	int s = 0;
	scanf("%s", &a);
	for(int i = 0; i < 100; i++) {
		if(a[i] == 'a')
			s++;
	}
	printf("%d", s);
}
