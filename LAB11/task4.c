#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 200
void Digit(int* p, int size) {
	printf("\n The Integar Array :\n");
	for (int i = 0;i < size;i++) {
		printf("%c", *(p + i));
	}
}
void Upper(char* ch) {
	for (int i = 0;*(ch + i) != '\0';i++) {
		if (*(ch + i) == 32) {
			continue;
		}
		if (*(ch + i) > 96 && *(ch + i) < 123) {
			*(ch + i) = *(ch + i) - 32;
		}
	}
	printf("\nThe Character Array with Spaces :\n");
	for (int i = 0;*(ch + i) != '\0';i++) {
		printf("%c", *(ch + i));
	}
}
void Counter(char* p, char* ch, int* dig, int* size) {
	int a = 0, s = 0;
	static int as = 0;
	*size = 0;
	for (int i = 0;*(p + i) != '\0';i++) {
		if ((*(p + i) > 64 && *(p + i) < 91) || (*(p + i) > 96 && *(p + i) < 123)) {
			*(ch + as) = *(p + i);
			as++;
			a++;
		}
		else if ((*(p + i) > 47 && *(p + i) < 58)) {
			*(dig + (*size)) = *(p + i);
			*size = *size + 1;
		}
		else {
			*(ch + as) = *(p + i);
			s++;
			as++;
		}
	}
	*(ch + as) = '\0';

	printf("\nThe Number Of Digit in String :%d", *size);
	printf("\nThe Number Of Alphabet in String :%d", a);
	printf("\nThe Number Of Spaces in String :%d", s);

}
int main() {
	char arr[SIZE], character[SIZE];
	int digit[SIZE], d;
	printf("Enter the string: ");
	for (int i = 0;i < SIZE;i++) {
		arr[i] = getchar();
		if (arr[i] == 10) {
			arr[i] = '\0';
			break;
		}
	}
	Counter(arr, character, digit, &d);
	Upper(character);
	Digit(digit, d);



	return 0;
}