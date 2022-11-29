#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
void Frequent(int *arr,int s,int *n,int *f) {
	int  flag=0, counter=0;
	for (int i = 0;i < s;i++) {
		counter = 0;
		for (int j = 0;j < s;j++) {
			if (*(arr+j) == *(arr+i)) {
				counter++;
			}
		}
		if (flag < counter) {
			*f = counter;
			*n = arr[i];
			flag = counter;
		}
	}
}
int main() {
	int arr[SIZE],frequency,number;
	for (int i = 0;i < SIZE;i++) {
		printf("Enter The Value At index (%d):",i+1);
		scanf("%d",&arr[i]);
	}
	Frequent(arr,SIZE,&number,&frequency);
	printf("\nThe Frequency Of Number :%d",frequency);
	printf("\nThe Number is :%d",number);
	return 0;
}