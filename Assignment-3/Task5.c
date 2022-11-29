#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
void Display(char  t[][3]) {
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			printf("| %c ", t[i][j]);
			if (j == 2) {
				printf("|");
			}
		}
		printf("\n");
	}


}
void Player(char* p1, char* p2, char* c1, char* c2) {
	static int m = 0;
	if (m > 0) {
		getchar();
	}
	m++;
	printf("Enter The Name Of Player 1 :");
	for (int i = 0;i < 20;i++) {
		*(p1 + i) = getchar();
		if (*(p1 + i) == 10) {
			*(p1 + i) = '\0';
			break;
		}
	}

	printf("Enter The Name Of Player 2 :");
	for (int i = 0;i < 20;i++) {
		*(p2 + i) = getchar();
		if (*(p2 + i) == 10) {
			*(p2 + i) = '\0';
			break;
		}
	}
	printf("%s Kindly Select the your character :", p1);
	scanf("%c", c1);
	getchar();
	printf("%s Kindly Select the your character :", p2);
	scanf("%c", c2);
}
void Player1(char t[][3], char p1[], char c1) {
	int i, j, flag = 1;
	printf("\n%s enter the index you want to enter character :", p1);
	printf("\nrow=");
	scanf("%d", &i);
	printf("\ncol=");
	scanf("%d", &j);
	while (flag == 1) {
		if (*(*(t + i - 1) + j - 1) == 32) {
			*(*(t + i - 1) + j - 1) = c1;
			flag = 0;
		}
		else {
			flag = 1;
			printf("\nAlready Reserved !\n");
			printf("\n%s Kindly enter the Correct Index you want to enter character :", p1);
			printf("\nrow=");
			scanf("%d", &i);
			printf("\ncol=");
			scanf("%d", &j);
		}
	}
}
void Player2(char t[][3], char p1[], char c1) {
	int i, j, flag = 1;
	printf("\n%s enter the index you want to enter character :", p1);
	printf("\nrow=");
	scanf("%d", &i);
	printf("\ncol=");
	scanf("%d", &j);
	while (flag == 1) {
		if (*(*(t + i - 1) + j - 1) == 32) {
			*(*(t + i - 1) + j - 1) = c1;
			flag = 0;
		}
		else {
			flag = 1;
			printf("\nAlready Reserved !\n");
			printf("\n%s Kindly enter the Correct Index you want to enter character :", p1);
			printf("\nrow=");
			scanf("%d", &i);
			printf("\ncol=");
			scanf("%d", &j);
		}
	}
}
int SIMILAR(char* p) {
	if (((*(p + 0) == *(p + 1)) && (*(p + 1) == *(p + 2))) && (*(p + 0) != 32 && *(p + 1) != 32 && *(p + 2) != 32)) {
		return 1;
	}
	else if ((*(p + 0) == *(p + 3) && *(p + 3) == *(p + 6)) && (*(p + 0) != 32 && *(p + 3) != 32 && *(p + 6) != 32)) {
		return 1;
	}
	else if ((*(p + 3) == *(p + 4) && *(p + 4) == *(p + 5)) && (*(p + 3) != 32 && *(p + 4) != 32 && *(p + 5) != 32)) {
		return 1;
	}
	else if ((*(p + 1) == *(p + 4) && *(p + 4) == *(p + 7)) && (*(p + 1) != 32 && *(p + 4) != 32 && *(p + 7) != 32)) {
		return 1;
	}
	else if ((*(p + 2) == *(p + 5) && *(p + 5) == *(p + 8)) && (*(p + 2) != 32 && *(p + 5) != 32 && *(p + 8) != 32)) {
		return 1;
	}
	else if ((*(p + 6) == *(p + 7) && *(p + 7) == *(p + 8)) && (*(p + 6) != 32 && *(p + 7) != 32 && *(p + 8) != 32)) {
		return 1;
	}
	else if ((*(p + 0) == *(p + 4) && *(p + 4) == *(p + 8)) && (*(p + 0) != 32 && *(p + 4) != 32 && *(p + 8) != 32)) {
		return 1;
	}
	else if ((*(p + 2) == *(p + 4) && *(p + 4) == *(p + 6)) && (*(p + 2) != 32 && *(p + 4) != 32 && *(p + 6) != 32)) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int check, again;
	char Table[3][3], player1[20], player2[20], ch1, ch2;
	do {
		system("cls");
		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 3;j++) {
				Table[i][j] = 32;
			}
		}
		Player(player1, player2, &ch1, &ch2);
		printf("\n");
		Display(Table);
		for (int i = 0;i < 5;i++) {
			system("cls");
			Display(Table);
			Player1(Table, player1, ch1);
			system("cls");
			Display(Table);
			check = SIMILAR(Table);
			//printf("\n%d\n", check);
			if (check == 1) {
				printf("\n\nCongragulation!! %s Is Winner !!", player1);
				break;
			}
			if (i < 4) {
				Player2(Table, player2, ch2);
				system("cls");
				Display(Table);
				check = SIMILAR(Table);
				if (check == 1) {
					printf("\n\nCongragulation !! %s Is Winner !!", player2);
					break;
				}
				//printf("\n%d\n", check);
			}
		}
		if (check == 0) {
			printf("\n!!The Game Has TIE!!\n");
		}
		printf("\n => Enter (1) For Playing Again\n => Enter (2) For Exit ");
		printf("\nPress :");
		scanf("%d", &again);
	} while (again == 1);
	return 0;
}
