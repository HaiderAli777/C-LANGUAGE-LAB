#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define SIZE 3
void printfarray(int X[][SIZE]) {
	for (int i = 0;i < SIZE;i++) {
		printf("|");
		for (int j = 0;j < SIZE;j++) {
			printf(" %d ", X[i][j]);
		}
		printf("|\n");
	}
}
void FindAverage(int X[][SIZE]) {
	int sum = 0;
	for (int i = 0;i < SIZE;i++) {
		for (int j = 0;j < SIZE;j++) {
			sum = sum + X[i][j];
		}
	}
	float average = sum / ((SIZE) * (SIZE));
	printf("\nThe Average of all element in array :%.2f", average);
}
void SquareRoot(int X[][SIZE]) {
	int sum = 0;
	for (int i = 0;i < SIZE;i++) {
		for (int j = 0;j < SIZE;j++) {
			sum = sum + (X[i][j] * X[i][j]);
		}
	}
	float sqaureroot = sqrt(sum);
	printf("\nThe Squareroot of sum of square of all element in array :%.2f", sqaureroot);
}

int FindElement(int X[][SIZE], int num) {
	int flag = 0;
	for (int i = 0;i < SIZE;i++) {
		for (int j = 0;j < SIZE;j++) {
			if (num == X[i][j]) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			break;
		}
	}

	if (flag == 1) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int X[SIZE][SIZE], num;
	for (int i = 0;i < SIZE;i++) {
		for (int j = 0;j < SIZE;j++) {
			printf("\nEnter the number at index (%d)(%d) :", i + 1, j + 1);
			scanf("%d", &X[i][j]);
		}
	}
	printfarray(X);
	FindAverage(X);
	SquareRoot(X);
	printf("\nEnter The Number You Find In Array : ");
	scanf("%d", &num);
	int check = FindElement(X, num);
	if (check) {
		printf("\nYes, %d Is Present in array .", num);
	}
	else {
		printf("\nNo, %d Is not  Present in array .", num);
	}
	return 0;
}
