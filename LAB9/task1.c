#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20
void Work(char str[], char ch1, char ch2) {
	for (int i = 0;str[i] != '\0';i++) {
		if (str[i] == ch1) {
			str[i] = ch2;
		}
	}
	printf("%s", str);
}
int main() {
	char str[20], ch = '_', ch2 = ' ';
	printf("Enter the line :");
	scanf("%s", &str);
	Work(str, ch, ch2);
	return 0;
}