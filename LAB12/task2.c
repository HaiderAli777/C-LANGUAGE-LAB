#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 100
#define TOK 10
void input(char a[])
{
	char ch;
	int i = 0;
	while ((ch = getchar()) != 10)
	{
		a[i++]=ch;
	}
	a[i] = '\0';
}
int main()
{
	char arr[SIZE];
	printf("Enter the string :\n");
	input(arr);
	char* arr2[TOK] = { NULL };
	int i = 0;
	arr2[i] = strtok(arr, " ");
	for (i = 1; i < TOK; i++)
	{
		arr2[i] = strtok(NULL, " ");
	}
	for (int j = TOK-1; j >= 0; j--)
	{
		if (arr2[j] != NULL)
			printf("%s ", arr2[j]);
	}
	return 0;
}

