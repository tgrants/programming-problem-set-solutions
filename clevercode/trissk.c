#include <stdio.h>

int main() {
	long a[3];
	for(int i = 0; i < 3; i++)
		scanf("%lli", &a[i]);

	char n[3] = {0, 0, 0};
	if(a[0] + a[1] > 0 || a[0] + a[2] > 0 || a[1] + a[2] > 0)
		n[0]++;
	if(a[0] == -a[1] || a[0] == -a[2] || a[1] == -a[2])
		n[1]++;
	if(a[0] + a[1] < 0 || a[0] + a[2] < 0 || a[1] + a[2] < 0)
		n[2]++;

	for(int i = 0; i < 3; i++) {
		if(n[i])
			printf("VAR\n");
		else
			printf("NEVAR\n");
	}
}
