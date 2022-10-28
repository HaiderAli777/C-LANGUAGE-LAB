#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//declearing valriables
	float radius, diameter, area, circumference;

	//entering the value
	printf("Please enter the radius of the circle: ");
	scanf("%f", &radius);

	//performing calculations
	diameter = 2 * radius;
	area = 3.14 * (radius * radius);
	circumference = 2 * 3.14 * radius;

	// showing results
	printf("The diameter of circle is: %.1f\n", diameter);
	printf("The area of circle is: %.1f\n", area);
	printf("The cicumference of circle is: %.1f", circumference);
	return 0;
}