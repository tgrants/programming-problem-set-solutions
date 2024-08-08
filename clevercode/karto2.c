#include <stdio.h>
#include <string.h>

// V1 2022-08-22
void insertionSort(char arr[][20], int n) {
	for(int i = 1; i < n; i++) {
		char temp[20];
		strcpy(temp, arr[i]);
		int j = i - 1;
		for(; j >= 0 && strcmp(arr[j], temp) > 0; j--)
			strcpy(arr[j + 1], arr[j]);
		strcpy(arr[j + 1], temp);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	char m[n][20];
	for(int i = 0; i < n; i++)
		scanf("%s", &m[i]);
	insertionSort(m, n);
	for(int i = 0; i < n; i++)
		printf("%s\n", m[i]);
}
