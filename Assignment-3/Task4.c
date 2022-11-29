#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 3
int getTotal(int *arr) {
	int total=0;
	for (int i = 0;i < ROW * COL;i++) {
		total = total + (*(arr + i));
	}
	return total;
}
float getAverage(int* arr) {
	int total = 0;
	for (int i = 0;i < ROW * COL;i++) {
		total = total + (*(arr + i));
	}
	float average = total / (ROW* COL);
	return average;
}
int getRowTotal(int arr[][COL], int r) {
	int total=0;
	for (int i = 0;i < COL;i++) {
		total = total + arr[r-1][i];
	}
	return total;
}
int getHighestNumberInRow(int arr[][COL], int r) {
	int h = arr[r-1][0];
	for (int i = 0;i < COL;i++) {
		if (arr[r - 1][i] > h) {
			h = arr[r - 1][i];
	}
	}
	return h;
}
int getLowestNumberInRow(int arr[][COL], int r) {
	int l;
	for (int i = 0;i < COL;i++) {
		if (i == 0) {
			l= arr[r - 1][i];
		}
		if (arr[r - 1][i] < l) {
			l = arr[r - 1][i];
		}
	}
	return l;
}
int getColTotal(int arr[][COL], int c) {
	int total = 0;
	for (int i = 0;i < ROW;i++) {
		total = total + arr[i][c-1];
	}
	return total;
}
int main() {
	int arr[ROW][COL],r,c,hr;
	for (int i = 0;i < ROW;i++) {
		for (int j = 0;j < COL;j++) {
			printf("\nEnter the value at index (%d)(%d):", i, j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n\n");
	for (int i = 0;i < ROW;i++) {
		for (int j = 0;j < COL;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int total=getTotal(arr);
	float Average = getAverage(arr);
	printf("Enter The Row to get it total : ");
	scanf("%d",&r);
	int rowtotal = getRowTotal(arr,r);
	printf("Enter The Col to get it total : ");
	scanf("%d", &c);
	int coltotal = getColTotal(arr, c);
	printf("Enter The Row to get it Highest Number And Lowest Number : ");
	scanf("%d", &hr);
	int getHighestRow = getHighestNumberInRow(arr, hr);
	int getLowestRow = getLowestNumberInRow(arr, hr);
	printf("The Total of 2D Array : %d",total);
	printf("\nThe Total Averqge  of 2D Array : %f", Average);
	printf("\nThe Row Total of 2D Array : %d", rowtotal);
	printf("\nThe Col Total of 2D Array : %d", coltotal);
	printf("\nThe Highest Number in Specified Row  2D Array : %d",getHighestRow);
	printf("\nThe Lowest Number in Specified Row of 2D Array : %d",getLowestRow);
	return 0;
}