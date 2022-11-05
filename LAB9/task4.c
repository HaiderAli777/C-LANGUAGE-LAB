#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
void Transpose(int arr[][SIZE], int row, int col) {
	int temp = 0, arrcopy[SIZE][SIZE];
	printf("\n\n");
	for (int i = 0;i < col;i++) {
		printf("|");
		for (int j = 0;j < row;j++) {
			printf(" %d ", arr[j][i]);
		}

		printf("|\n");
	}
}
int main() {
	int row, col, arr[SIZE][SIZE];
	printf("Enter the number of Row :");
	scanf("%d", &row);
	while (row < 1 || row>10) {
		printf("Plz Enter the number of Row between (1-10) :");
		scanf("%d", &row);
	}
	printf("\Enter the number of Col :");
	scanf("%d", &col);
	while (col < 1 || col>10) {
		printf("\nPlz Enter the number of Col between (1-10) :");
		scanf("%d", &col);
	}
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			printf("\nEnter The Value at index (%d) (%d) : ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0;i < row;i++) {
		printf("|");
		for (int j = 0;j < col;j++) {
			printf(" %d ", arr[i][j]);
		}
		printf("|\n");
	}
	Transpose(arr, row, col);
	return 0;
}