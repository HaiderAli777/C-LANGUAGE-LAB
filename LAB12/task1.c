#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char telephone[15];
	int AreaCodeInt;
	printf("Enter you telephone number in format (xxx) xxx-xxxx : ");
	gets(telephone);
	char* p1 = strtok(telephone+1, " ");
	char* p2 = strtok(NULL, "-");
	char* p3 = strtok(NULL, " ");
	printf("Area Code : %s \n", p1);
	printf("First 3 digits : %s \n", p2);
	printf("Last 4 digits : %s \n", p3);
	AreaCodeInt = atoi(p1);
	printf("\nThe Integer value of Area Code : %d", AreaCodeInt);
	return 0;
}