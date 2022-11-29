#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define SIZE 100
void RotateCyclic(int *ptr,int s,int k) {
	int temp;
	for (int i = 0;i < k;i++) {
		temp = *(ptr + s - 1);
		for(int j=s-1;j >= 0;j--) 
		{
			*(ptr + j) = *(ptr + j - 1);
		}
		*(ptr + 0) = temp;
	}
}
int main() {
	int arr[SIZE],k,size;
	printf("Enter The Size of array :");
	scanf("%d", &size);
	for (int i = 0;i < size;i++) {
		printf("Enter The value at index %d : ", i + 1);
		scanf("%d",(arr + i));
	}
	printf("\nThe Following Array as Follow :\n");
	for (int i = 0;i < size;i++) {
		printf("%d ", *(arr + i));
	}
	printf("\nEnter The Value Of K for Rotating :");
	scanf("%d",&k);
	RotateCyclic(arr, size, k);
	printf("\nAfter Rotating :\n");
	for (int i = 0;i < size;i++) {
		printf("%d ", *(arr + i));
	}
	return 0;
}