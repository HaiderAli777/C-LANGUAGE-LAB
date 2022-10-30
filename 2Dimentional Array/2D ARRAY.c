#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROW 3
#define COL 4
void checkIDENTITY(int arr[][COL]) {
	int flag;
	for (int i = 0;i < ROW;i++) {
		for (int j = 0;j < COL;j++) {
			if (i == j) {
				if (arr[i][j] != 1) {
					flag = 1;
				}
		}
			else {
				if (arr[i][j] != 0) {
					flag = 1;
				}
			}
		}
	}
	if (flag == 1) {
		printf("The 2D Array is Not Identity");
	}
	else
	{
		printf("The 2D Array is Identity\n");
	}
}
void reverseRow(int arr[][COL]) {
	int temp;
	
	for (int i = 0;i <= ROW/2;i++) {
		for (int j = 0;j < COL;j++) {
			temp = arr[i][j];
			arr[i][j]=arr[ROW - 1 - i][j];
			arr[ROW - 1 - i][j] = temp;
		}
	}
	for (int i = 0;i < ROW;i++) {
		printf("| ");
		for (int j = 0;j < COL;j++) {
			printf("%d", arr[i][j]);
		}
		printf(" |\n");
	}

}
void reverseCol(int arr[][COL]) {

	int temp;

	for (int i = 0;i <= COL/2;i++) {
		for (int j = 0;j < ROW;j++) {
			temp = arr[j][i];
			arr[j][i] = arr[j][COL- 1 - i];
			arr[j][COL - 1 - i] = temp;
		}
	}
	for (int i = 0;i < ROW;i++) {
		printf("| ");
		for (int j = 0;j < COL;j++) {
			printf("%d", arr[i][j]);
		}
		printf(" |\n");
	}

}
void Transpose(int arr[][COL]) {
	for (int i = 0;i < COL;i++) {
		printf("| ");
		for (int j = 0;j < ROW;j++) {
			printf("%d",arr[j][i]);
		}
		printf(" |\n");
	}

}
int main() {
	int arr[ROW][COL],t[ROW][COL];
	for (int i = 0;i < ROW;i++) {
		for (int j = 0;j < COL;j++) {
			printf("Enter the Value in index [%d][%d] :", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
		for (int i = 0;i < ROW;i++) {
			printf("| ");
			for (int j = 0;j < COL;j++) {
				printf("%d", arr[i][j]);
			}
			printf(" |\n");
		}
		printf("\nHere We Check Identity\n");
		printf("--------------------------\n");
		checkIDENTITY(arr);
		printf("\nHere We reverse the row\n");
		printf("--------------------------\n");
		reverseRow(arr);
		printf("\nHere We reverse the Colomn\n");
		printf("--------------------------\n");
		reverseCol(arr);
		printf("\nHere We Take The Transpose\n");
		printf("--------------------------\n");
		Transpose(arr);
		printf("\nHere We Take The Transpose\n");
		printf("--------------------------\n");
		Transpose(arr,t);

		return 0;

	}
