#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void UpperCase(char* ch) {
	for (int i = 0;ch[i] != '\0';i++) {
		printf("%c", *(ch + i) - 32);
	}
}
int main() {
	char ch[10];
	printf("Enter the string :");
	scanf("%s", ch);
	UpperCase(ch);
	return 0;
}