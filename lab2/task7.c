#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	// declearing variables
	float regularPrice, discountAmount, salePrice;

	//Enter amount
	printf("Regular price: $ ");
	scanf("%f", &regularPrice);

	//Performing calculations
	discountAmount = regularPrice * .2;
	salePrice = regularPrice - discountAmount;

	//Showing results
	printf("Discount amount: $ %.2f\n", discountAmount);
	printf("Sale price: $ %.2f", salePrice);
	return 0;
}