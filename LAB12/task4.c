#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 200
int main()
{
	char Array[SIZE];
	char* temp;
	int i = 0,flag=0;
	printf("Plz enter the string : ");
	Array[i] = getchar();
	while (Array[i] != 10) {
		i++;
		Array[i] = getchar();
	}
	Array[i] = '\0';
	printf(" The Strings ending with letters ed : ");
	for (int i = 0; i < SIZE; i++)
	{
		if (i == 0)
		{
			temp = strtok(Array, " ");
			flag = 0;
			while (temp[flag] != 0)
			{
				flag++;
			}
			if (temp[flag - 2] == 'e' && temp[flag - 1] == 'd')
				printf("%s ", temp);
		}
		temp = strtok(NULL," ");
		flag = 0;
		while (temp[flag] != 0)
		{
			flag++;
		}
		if (temp[flag - 2] == 'e' && temp[flag - 1] == 'd')
			printf("%s, ", temp);
	}
	return 0;
}