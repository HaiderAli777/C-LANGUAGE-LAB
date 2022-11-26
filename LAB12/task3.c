#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 100
#define SIZE2 100
void input(char a[])
{
	char ch;
	int i = 0;
	while ((ch = getchar()) != 10)
	{
		a[i++] = ch;
	}
	a[i] = '\0';
}
int main()
{
	char Array[SIZE];
	printf("Enter a random String = ");
	input(Array);
	char* ptr[SIZE2];
	ptr[0] = strtok(Array, " ");
	for (int i = 1; i < SIZE2; i++)
	{
		ptr[i] = strtok(NULL, " ");
	}

	printf("Words that Start With Letter B :\n");
	for (int i = 0; i < SIZE2; i++)
	{
		if (*ptr[i] == 'b' || *ptr[i] == 'B')
		{
			printf("%s\n", ptr[i]);
		}
	}
	return 0;
}