/********************************************
* COMP1411 - Computer Programming I         *
* Lab 6, Question 3                         *
* Matthew Brown, Student ID# 1126992        *
********************************************/
#include <stdio.h>
#include <stdlib.h>
 
int subarraySum(int a[], int n, int s); //prototype function

int main() {
	int n; 
	int s;
	int l = 0;
	int f = 0;
	int a[5];

	printf("Please enter the size of the array: ");
	scanf_s("%d", &n);

	for (int i = 0; i <= n - 1; ++i) {
		printf("\nEnter a non-zero number into the array: ");
		scanf_s("%d", &a[i]);
	}

	printf("\nEnter the sum to find in a continuous subarray: ");
	scanf_s("%d", &s);

	for (int i = 0; i <= n - 1; ++i) {
		f = a[i];
		int sum = a[i];
		for (int j = (i + 1); j <= n - 1; ++j) {
			l = a[j];
			if (sum == s)
				goto jump;
			else if (sum > s)
				break;
			else
				sum += a[j];
		}
	}
jump:
	printf("\n\nThe sum of elements from position %d to position %d is %d", a[f], a[l], s);

}//end main
