#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int length(const char* ptr)
{
	int i = 0;
	while (*(ptr + i) != 0)
	{
		i++;
	}
	return i;
}
int main()
{
	char Array[200];
	int y,i=0;
	printf("Enter any string : ");
	Array[i] = getchar();
	while (Array[i] != 10) {
		i++;
		Array[i] = getchar();
	}
	Array[i] = '\0';
	y = length(Array);
	printf("The Length of given string : %d", y);
	return 0;
}