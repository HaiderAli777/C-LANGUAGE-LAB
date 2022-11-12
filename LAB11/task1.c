#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 5
#define LEN 40
int length(const char* n)
{
	int i = 0;
	while (*n != '\0')
	{
		i++;
		n++;
	}
	return i;
}
int compare(const char* l, const char* n)
{
	int l1 = length(l);
	int l2 = length(n);
	int size = 0;
	if (l1 < l2)
	{
		return 0;
	}
	else if (l1 > l2)
	{
		return 0;
	}
	else
	{
		int flag = 1;
		for (int i = 0; i < l1; i++)
		{
			if (*l != *n)
			{
				flag = 0;
				break;
			}
			n++;
			l++;
		}
		if (flag == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	char name[LEN];
	char list[MAX][LEN] = { "BITF21M531", "BITF21M532", "BITF21M533", "BITF21M534", "BITF21M535" };
	printf("Please enter the name: ");
	scanf("%s", name);
	int eq;
	int flag = 0;
	for (int i = 0; i < MAX; i++)
	{
		eq = compare(*(list + i), name);
		if (eq == 1)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("YES %s is in the list", name);

	}
	else {
		printf("Sorry %s is not in the list", name);
	}
	return 0;
}
