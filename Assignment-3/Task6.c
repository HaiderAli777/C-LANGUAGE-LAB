#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 16
double Median(int *arr,int s) {
	int center;
	double median;
	if (s % 2 == 0) {
		center = s / 2;
	median=(*(arr + center-1)+*(arr + (center))) / 2;
	}
	else {
	
		center = s / 2;
		median = (*(arr + center));
	}
	return median;
}
int main() {
	int arr[SIZE]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,12};
	double m = Median(arr, SIZE);
	printf("The Median Of Arr is : %lf ", m);
	return 0;
}