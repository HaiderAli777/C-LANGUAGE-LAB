#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 5
void SumArray(const int* dest, const int* src, int* sum, int size) {
	for (int i = 0;i < size;i++) {
		*(sum + i) = *(dest + i) + *(src + i);
	}
}
int main() {
	int arr[SIZE], arr2[SIZE], sum[SIZE];
	for (int i = 0;i < SIZE;i++) {
		printf("Enter Value at index at (%d) :", i + 1);
		scanf("%d", &arr[i]);
	}
	for (int i = 0;i < SIZE;i++) {
		printf("Enter Value at index at (%d) :", i + 1);
		scanf("%d", &arr2[i]);
	}
	SumArray(arr2, arr, sum, SIZE);
	printf("First  Array :\n");
	for (int i = 0;i < SIZE;i++) {
		printf("%d\t", arr[i]);
	}
	printf("\nSecond Array :\n");
	printf("\n");
	for (int i = 0;i < SIZE;i++) {
		printf("%d\t", arr2[i]);
	}
	printf("\nSum Array :\n");
	printf("\n");
	for (int i = 0;i < SIZE;i++) {
		printf("%d\t", sum[i]);
	}
	return 0;
}