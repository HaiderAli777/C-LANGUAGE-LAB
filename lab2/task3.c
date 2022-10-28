#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//declearig variable
	signed int min, givenSec, sec;

	//entering number
	printf("Enter seconds: ");
	scanf("%d", &givenSec);

	//performing calculations
	min = givenSec / 60;
	sec = givenSec % 60;

	//showing results
	printf("its equivalent to\n Minitues: %d \n Seconds: %d", min, sec);
	return 0;
}