#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int RemoveNegative(int *arr,int s,int *ns) {
	int counter=0,temp;
	*ns = 0;
	for (int i = 0;i < s;i++) {
		if (*(arr + i) > 0) {
			temp = *(arr + i);
			*(arr + (*ns)) =temp ;
			*ns=*ns+1;
	}
	else
		{
			counter++;
		}
	}
	return counter;
}
int main() {
	int newsize;
	int arr[SIZE] = {1,-2,3,-4,-5,6,7,-8,-9,10};
	int r=RemoveNegative(arr, SIZE, &newsize);
	printf("\nNew Array :\n");
	for (int i = 0;i <newsize;i++) {
		printf("%d ", arr[i]);
	}
	printf("\nThe Negative Value In Array Is : %d",r);

	return 0;
}