#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	 
	//defining the variables
	int basket1, basket2, basket3;

	//entering numbers
	printf("Enter the first integier: ");
	scanf("%d", &basket1);
	printf("Enter the second integier: ");
	scanf("%d", &basket2);

	//performing calculations
	basket3 = basket1;
	basket1 = basket2;
	basket2 = basket3;

	//showing results
	printf("first intergier is: %d\n", basket1);
	printf("first intergier is: %d", basket2);

	return 0;
}