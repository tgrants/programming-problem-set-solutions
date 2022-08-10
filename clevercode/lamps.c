// WORK IN PROGRESS - NOT SUBMITTED

#include <stdio.h>
#include <string.h>

int main () {
	int ls, s;
	scanf("%d %d", &ls, &s);
	int l[ls], c[ls];
	for(int i = 0; i < ls; i++)
		scanf("%d", &l[i]);
	while(s > 0) {
		for(int i = 0; i < ls - 1; i++) {
			if (l[i + 1] == 1)
				c[i] = 1 - l[i];
			else
				c[i] = l[i];
		}
		if(l[0] == 1)
			c[ls - 1] = 1 - l[ls - 1];
		else
			c[ls - 1] = l[ls - 1];
		memcpy(l, c, sizeof(l));
		s--;
	}
	for(int i = 0; i < ls; i++)
		printf("%d\n", l[i]);
}
