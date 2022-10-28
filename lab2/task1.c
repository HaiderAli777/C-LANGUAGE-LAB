#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	signed int num, digit1, digit2, digit3;		//define variables
	int sum;

	//Enter the numbers
	printf("Enter the three digit number: ");
	scanf("%d", &num);

	//performings calculations
	digit1 = num % 10;
	num = num / 10;
	digit2 = num % 10;
	num = num / 10;
	digit3 = num % 10;
	num = num / 10;

	sum = digit1 + digit2 + digit3;

	//showing the results
	printf("sum of digits is: %d", sum);
	return 0;
}