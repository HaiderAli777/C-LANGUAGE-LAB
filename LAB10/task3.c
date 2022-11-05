#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 5
void CopyArray(int* dest, const int* src, int size) {
	for (int i = 0;i < size;i++) {
		*(dest + i) = *(src + i);
	}
}
int main() {
	int arr[SIZE], arr2[SIZE];
	for (int i = 0;i < SIZE;i++) {
		printf("Enter Value at index at (%d) :", i + 1);
		scanf("%d", &arr[i]);
	}
	CopyArray(arr2, arr, SIZE);
	printf("Original Array :\n");
	for (int i = 0;i < SIZE;i++) {
		printf("%d\t", arr[i]);
	}
	printf("\nThe Copy Array Array :\n");
	printf("\n");
	for (int i = 0;i < SIZE;i++) {
		printf("%d\t", arr2[i]);
	}
	return 0;
}