#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void PrintName() {
	printf("Without Loop \n");
	char name[10] = { 'H','A','I','D','E','R','\0' };
	printf("%s",name);
	printf("\nWith Loop \n");
	for (int i = 0;i<10;i++) {
		printf("%c", name[i]);
	}

}
void CompareString(char n1[], char n2[]) {
	int counter = 0;
	for (int i = 0;i < 10;i++) {
		if (n1[i] == n2[i]) {
			counter++;
		}
	}
	if (counter == 10) {
		printf("Both Name Are Equal ");
	}
	else {
		printf("Both Name Are Not Equal ");
	}
}
 void ReverseString(char n[]) {
	char temp;
	int count = 0;
	for (int i = 0;i < 10;i++) {
		if (n[i] == '\0') {
			break;
		}
		count++;
	}
	for (int i = 0;i <= count / 2;i++) {
		temp = n[i];
		n[i] = n[count- i];
		n[count - i] = temp;
	}
	printf("\nThe Reverse Of An Array : ");
	for (int i = 0;i <= count;i++) {
		printf("%c", n[i]);
	}
}
 void CopyString(char n[]) {
	 char arr2[10];
	 for (int i = 0;i<=3;i++) {
		 arr2[i] = n[i];
	 }
	 printf("\nThe Copy of Other String :");
	 for (int i = 0;i<=3;i++) {
		 printf("%c", arr2[i]);
	 }
	
 }
 void  FindCharacter(char n[]) {
	 int counter = 0;
	 char character;
	 getchar();
	 printf("\nEnter Any Character :");
	 scanf("%c", &character);
	
	 for (int i = 0;i<=3;i++) {
		 if (character == n[i]) {
			 counter = 1;
			 break;
		 }
	 }
	 if (counter == 1) {
		 printf("\n Number Found ");
	 }
	 else {
		 printf("\n Number Not Found ");
	 }
 }
 
int main() {

	PrintName();
	char n1[10], n2[10];
	printf("\nEnter The Name 1 :");
	scanf("%s", &n1);
	printf("\nEnter The Name 2 :");
	scanf("%s", &n2);
	CompareString(n1, n2);
	ReverseString(n1);
	CopyString(n2);
	FindCharacter(n2);

	return 0;
}