#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	srand((0));
	int ra, rn, rv, rp;
	char* article[] = {"The","A","One","Some","Any"};
	char* Noun[] = {"boy","girl","dog","town","car"};
	char* Verb[] = {"jumped","droved","skipped","ran","walked"};
	char* prepostion[] = {"to","from","over","under","on"};
	char* paragraph[1000];
	static int i = 0;
	char *ch = " ", *ch1 = ".";
	for (int j = 0;j < 20;j++) {
		ra = rand() % 4;
		rn = rand() % 4;
		rv = rand() % 4;
		rp = rand() % 4;
		paragraph[i++] = article[rn];
		paragraph[i++] = ch;
		paragraph[i++] = Noun[rn];
		paragraph[i++] = ch;
		paragraph[i++] = Verb[rv];	
		paragraph[i++] = ch;
		paragraph[i++] = prepostion[rp];
		paragraph[i++] = ch;
		paragraph[i++] = Noun[rn];
		paragraph[i++] = ch;
		paragraph[i++] = Verb[rv];
		paragraph[i++] = ch1;
	}
		for (int j = 0;j <i;j++) {
		printf("%s",paragraph[j]);
	}
	return 0;
}