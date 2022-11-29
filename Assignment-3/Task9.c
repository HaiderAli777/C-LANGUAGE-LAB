#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	int i = 0;
	char str1[SIZE],str2[SIZE];
	printf("\nEnter The String 1 :");
	while ((str1[i] = getchar())!='\n') {
		i++;
	}
	str1[i] = '\0';
	i = 0;
	printf("\nEnter The String 2 :");
	while ((str2[i] = getchar())!='\n') {
		i++;
	}
	str2[i] = '\0';
	int check =strcmp(str1,str2);
	if (check > 0) {
		printf("String 1 Is Greater Than String 2");
	}
	else if (check == 0) {
		printf("String 1 Is Equal To  String 2");
	}
	else {
		printf("String 1 Is smaller Than String 2");
	}
	return 0;
}