#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//declearig variable
	char char1, char2, char3, char4, char5, char6;
	printf("Enter a character: ");
	scanf("%c", &char1);
	char2 = char1 + 1;
	char3 = char1 + 2;
	char4 = char1 + 3;
	char5 = char1 + 4;
	char6 = char1 + 5;
	printf("Next five character are: %c, %c, %c, %c, %c", char2, char3, char4, char5, char6);
	return 0;
}