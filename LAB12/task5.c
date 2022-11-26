#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int number;
	char character;
	do
	{
		printf("Kindly enter any Number : ");
		scanf("%d",&number);
		if (number > 255 || number < 0)
			printf("It is Not a ASCII code ! ");
	} while (number > 255 || number < 0);
	character = number;
	printf("Character for %c==%d",character,number);
}