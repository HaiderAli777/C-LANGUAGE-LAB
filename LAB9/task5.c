#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
void INSERT(int arr[][SIZE], int arr2[][SIZE], int r1, int c1, int r2, int c2, int si, int sj) {
	int k = 0, l = 0;
	if ((si + r2 <= r1) && (sj + c2 <= c1)) {
		for (int i = si;i < r1;i++) {
			if (k >= r2) {
				break;
			}
			l = 0;
			for (int j = sj;j < c1;j++) {
				arr[i][j] = arr2[k][l];
				l++;
				if (l >= c2) {
					break;
				}
			}
			k++;
		}
		printf("\n\n");
		for (int i = 0;i < r1;i++) {
			printf("|");
			for (int j = 0;j < c1;j++) {
				printf(" %d ", arr[i][j]);
			}
			printf("|\n");
		}
	}
	else {
		printf("\nInvalid Input!!");
	}
}
int main() {
	int row, row2, col2, col, arr[SIZE][SIZE], arr2[SIZE][SIZE], indexi = 0, indexj = 0;
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
	//arr2
	printf("Enter the number of Row :");
	scanf("%d", &row2);
	while (row2 < 1 || row2>10) {
		printf("Plz Enter the number of Row between (1-10) :");
		scanf("%d", &row2);
	}
	printf("\Enter the number of Col :");
	scanf("%d", &col2);
	while (col2 < 1 || col2>10) {
		printf("\nPlz Enter the number of Col between (1-10) :");
		scanf("%d", &col2);
	}
	for (int i = 0;i < row2;i++) {
		for (int j = 0;j < col2;j++) {
			printf("\nEnter The Value at index (%d) (%d) : ", i + 1, j + 1);
			scanf("%d", &arr2[i][j]);
		}
	}
	for (int i = 0;i < row2;i++) {
		printf("|");
		for (int j = 0;j < col2;j++) {
			printf(" %d ", arr2[i][j]);
		}
		printf("|\n");
	}
	printf("\nEnter the number of row where u insert it : ");
	scanf("%d", &indexi);
	printf("\nEnter the number of colomn where u insert it : ");
	scanf("%d", &indexj);
	INSERT(arr, arr2, row, col, row2, col2, indexi, indexj);
	return 0;
}