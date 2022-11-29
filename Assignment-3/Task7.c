#define _CRT_SECURE_NO_WARNINGS
#define SIZE 4
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void input(char s1[]) {
	int i = 0;
	while ((s1[i] = getchar()) != '\n') {
		i++;
	}
	s1[i] = '\0';
}
int main() {
	char s1[10];
	int temp = 0;
	int i = 0;
	for (int i = 0;i < 4;i++) {
		printf("Enter The String %d :", i + 1);
		input(s1);
		temp = temp+atoi(s1);
	}
	printf("\nThe Sum Of String : %d\n", temp);
	return 0;
}