#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 30
int strC(char* str1, char* str2)
{
	int counter, length1, length2;
	counter = length1 = length2 = 0;
	while (*(str1 + counter) != 0)
		counter++;
	length1 = counter;
	counter = 0;
	while (*(str2 + counter) != 0)
		counter++;
	length2 = counter;
	counter = 0;
	if (length1 > length2)
		return 2;
	else if (length1 < length2)
		return 3;
	else
	{
		while (*(str1 + counter) != 0)
		{
			if (*(str1 + counter) != *(str2 + counter))
			{
				return 4;
			}
			counter++;
		}
		return 1;
	}
}
int main()
{
	char str1[SIZE];
	char str2[SIZE];
	char str3[SIZE];
	int strc = 0, strp = 0;
	printf("Enter any String to compare : ");
	gets(str1);
	printf("Enter any other string to compare : ");
	gets(str2);
	strc = strC(str1, str2);
	printf("\n");
	if (strc == 1)
		printf("Both Strings are equal ! \n");
	else if (strc == 2)
		printf("Strings are not equal and 1st string is larger than 2nd string !\n");
	else if (strc == 3)
		printf("Strings are not equal and 1st string is smaller than 2nd string !\n");
	else
		printf("Strings are unequal !\n");
	return 0;
}
