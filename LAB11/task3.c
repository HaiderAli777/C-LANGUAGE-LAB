#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
void IsVowel(char* p, int* vowel) {
	int counter = 0;
	static int j = 0;
	for (int i = 0;*(p + i) != '\0';i++) {
		if (*(p + i) == 'a' || *(p + i) == 'A' || *(p + i) == 'e' || *(p + i) == 'E' || *(p + i) == 'i' || *(p + i) == 'I' || *(p + i) == 'o' || *(p + i) == 'O' || *(p + i) == 'u' || *(p + i) == 'U') {
			counter++;
			if (*(p + i) > 96 && *(p + i) < 123) {
				*(p + i) = *(p + i) - 32;
				*(vowel + j) = *(p + i);
				j++;
			}
			else {
				*(vowel + j) = *(p + i);
				j++;
			}
		}
	}
	printf("There Are %d Vowel In String ", counter);
	printf("\n");
	printf("The Vowel In Upper Case:");
	for (int i = 0;i < j;i++) {
		printf("%c", *(vowel + i));
	}
}
int main() {
	char array[SIZE], vowel[SIZE];
	printf("Enter the name of string :");
	scanf("%s", &array);
	IsVowel(array, vowel);
	return 0;
}