#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	signed int num, digit1, digit2, digit3;		//define variables
	int reverse = 0;

	//Enter the numbers
	printf("Enter the three positive digit number: ");
	scanf("%d", &num);

	//performings calculations
	digit1 = num % 10;
	num = num / 10;
	reverse = digit1;
	digit2 = num % 10;
	num = num / 10;
	reverse = reverse * 10 + digit2;
	digit3 = num % 10;
	num = num / 10;
	reverse = reverse * 10 + digit3;

	//showing results

	printf("reverse of is: %d", reverse);

	return 0;
}