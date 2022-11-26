#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isDigit(char c)
{
	if (c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}
int isAlpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}
int isLowerAlpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
int isCapitalAlpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}
int isAlphaNumeric(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}
int isHexaDigit(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'z'))
		return 1;
	else
		return 0;
}
int isSpace(char c)
{
	if (c == 32)
		return 1;
	else
		return 0;
}
int isPunctuation(char c)
{
	if (c > 32)
	{
		if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
int isBlank(char c)
{
	if (c == '\0')
		return 1;
	else
		return 0;
}
int isPrint(char c)
{
	if (c >= 32)
		return 1;
	else
		return 0;
}
int isGraph(char c)
{
	if (c <= 32)
		return 0;
	else
		return 1;
}
int isCntrl(char c)
{
	if (c == '\t' || c == '\v' || c == '\f' || c == '\a' || c == '\b' || c == '\r' || c == '\n')
		return 1;
	else
		return 0;
}
int toLower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 32;
	else
		return c;
}
int toUpper(char c)
{
	if (c >= 'a' && c <= 'z')
		return c - 32;
	else
		return c;
}
int main()
{
	char dig = '4', Alphabet = 'a', cap = 'Z', hexaDig = 'D', space = ' ', p = ';';
	int check = 0;
	check = isDigit(dig);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	check = isDigit(p);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	check = isAlpha(Alphabet);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	check = isAlpha(dig);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	check = isCapitalAlpha(cap);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	check = isLowerAlpha(cap);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	check = isAlphaNumeric(Alphabet);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	check = isAlphaNumeric(p);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	check = isSpace(space);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	check = isHexaDigit(hexaDig);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	check = isHexaDigit(p);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	check = isPunctuation(p);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	check = isPunctuation(dig);
	if (check == 0)
		printf("False\n");
	else
		printf("True\n");
	return 0;
}