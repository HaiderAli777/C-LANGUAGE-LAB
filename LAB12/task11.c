#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 100
int main()
{
	char string[SIZE];
	char string2[SIZE];
	int temp1 = 0;
	int temp2 = 0;
	printf("Enter any string : ");
	gets(string);
	printf("Enter the string to find and enter remaining string : ");
	gets(string2);
	char* fistString = strstr(string, string2);
	char* secondString = strstr(fistString + 1, string2);
	printf(" first occurance : %s\n",fistString);
	printf(" second occurance : %s\n",secondString);
	return 0;
}
