#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20
void Work(char str[]) {
	int dcounter = 0, acounter = 0;
	for (int i = 0;str[i] != '\0';i++) {
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)) {
			acounter++;
		}
		if ((str[i] > 47 && str[i] < 58)) {
			dcounter++;
		}
	}
	printf("\nThe Number of Digit is : %d", dcounter);
	printf("\nThe Number of Alphabet is : %d", acounter);
}
int main() {
	char str[20];
	printf("Enter the line :");
	scanf("%s", &str);
	Work(str);
	return 0;
}