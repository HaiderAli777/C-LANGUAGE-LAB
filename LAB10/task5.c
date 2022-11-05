#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <stdio.h>
#define SIZE 20
void ReadThemAll(const int* t, int start, int end) {
	printf("\nThis The Value Between The index :\n\n");
	for (int i = 0;i < SIZE;i++) {
		if (i >= start && i <= end) {
			printf("%d\t", *(t + i));
		}
	}
}
int main() {
	srand(time(0));
	int t[SIZE], sindex, eindex;
	for (int i = 0;i < SIZE;i++) {
		t[i] = 1 + rand() % 20;
	}
	printf("\n");
	for (int i = 0;i < SIZE;i++) {
		printf("%3d", t[i]);
	}
	printf("\nEnter The Starting point of index : ");
	scanf("%d", &sindex);
	printf("\nEnter The Ending point of index : ");
	scanf("%d", &eindex);
	ReadThemAll(t, sindex, eindex);

	return 0;
}