#define _CRT_SECURE_N0_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
int isEven(int value) {
	if (value % 2 != 0) {
		return 0;
	}
	else {
		return 1;
	}
}
int main() {
	int arr[SIZE], even[SIZE], odd[SIZE], evenNumer, OddNumber;
	srand(time(0));
	for (int i = 0;i < 50;i++) {
		*(arr + i) = 1 + rand() % 200;

	}
	for (int i = 0;i < 50;i++) {
		int value = isEven(*(arr + i));
		if (value == 1) {
			static int e = 0;
			even[e] = *(arr + i);
			e++;
			evenNumer = e;
		}
		if (value == 0) {
			static int o = 0;
			odd[o] = *(arr + i);
			o++;
			OddNumber = o;
		}

	}
	printf("Even Number Are :\n");
	for (int i = 0;i < evenNumer;i++) {
		printf("%d ", even[i]);
	}
	printf("\nOdd Number Are :\n");
	for (int i = 0;i < OddNumber;i++) {
		printf("%d ", odd[i]);
	}


	return 0;
}