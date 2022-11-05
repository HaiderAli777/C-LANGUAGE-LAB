#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printAddressValue(const char* ch) {
	for (int i = 0;ch[i] != '\0';i++) {
		printf("%p", ch+i);
		printf("\n%c\n", *(ch + i));
	}
}
int main() {
	char ch[10];
	printf("Enter the string :");
	scanf("%s",ch);
	printAddressValue(ch);
	return 0;
}