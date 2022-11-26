#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE1 100
#define SIZE2 200
void copyString(char* ptr1, char* ptr2)
{

	int i = 0;
	while (*(ptr2 + i) != 0)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
}
void concatString(char* ptr1, char* ptr2)
{
	int i = 0;
	int j = 0;
	while (*(ptr1 + i) != 0)
	{
		i++;
	}
	*(ptr1 + i) = ' ';
	i++;
	while (*(ptr2 + j) != 0)
	{
		*(ptr1 + i) = *(ptr2 + j);
		j++;
		i++;
	}
	*(ptr1 + i) = '\0';
}
int main()
{
	char string1[SIZE2];
	char string2[SIZE1] = { '\0' };
	printf("Enter any String : ");
	gets(string1);
	copyString(string2, string1);
	printf("\nThe String After Copying\n");
	printf("String 1 : %s\n", string1);
	printf("String 2 : %s\n", string2);
	concatString(string1, string2);
	printf("\nThe String After Concatination\n");
	printf("String 1 : %s\n", string1);
	printf("String 2 : %s\n", string2);
	return 0;
}