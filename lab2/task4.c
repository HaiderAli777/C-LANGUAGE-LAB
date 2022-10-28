#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//declearing variables
	int num1, num2, num3, num4, num5;
	num1 = num2 = num3 = num4 = num5 = 0;
	int difference;

	//Getting information
	printf("Enter the first number of series: ");
	scanf("%d", &num1);
	printf("The difference in consective numbers : ");
	scanf("%d", &difference);

	num2 = num1 + difference;
	num3 = num2 + difference;
	num4 = num3 + difference;
	num5 = num4 + difference;

	printf("The first five numbers of series are: %d, %d, %d, %d, %d", num1, num2, num3, num4, num5);
	return 0; 
}