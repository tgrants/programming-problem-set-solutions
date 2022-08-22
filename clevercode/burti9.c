#include <stdio.h>
#include <string.h>

// V1 2022-08-22
void insertionSort(char arr[], int n) {
	for(int i = 1; i < n; i++) {
		int temp = arr[i];
		int j = i - 1;
		for(; j >= 0 && arr[j] > temp; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = temp;
	}
}

int main() {
	char a[100];
	scanf("%s", a);
	insertionSort(a, strlen(a));
	printf("%s", a);
}
