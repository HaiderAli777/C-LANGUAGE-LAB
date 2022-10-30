#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
void UpperCase(char str[]) {
	for (int i = 0;i < SIZE;i++) {
		if (str[i]=='\0') {
			break;
		}
		if (str[i] > 96 && str[i] < 123) {
			str[i] = str[i] - 32;
		}
	}
	printf("\n String In Upper Case\n");
	printf("%s", str);
}
void LowerCase(char str[]) {
	for (int i = 0;i < SIZE;i++) {
		if (str[i] == '\0') {
			break;
		}
		if (str[i] > 64 && str[i] < 91) {
			str[i] = str[i] +32;
		}
	}
	printf("\n String In Lower Case\n");
	printf("%s", str);
}
int main() {
	char str[SIZE];
	printf("Enter th Name :");
	scanf("%s",&str);
	UpperCase(str);
	LowerCase(str);
	return 0;
}