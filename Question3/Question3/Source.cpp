/*************************************
* COMP1411 - Computer Programming I  *
* Lab 5, Question 3                  *
* Matthew Brown Student ID# 1126992  *
*************************************/
#include <stdio.h>

int swap(int a[], int x, int y); //prototype function

int main() {

	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int x, y;

	for (int i = 0; i <= 8; ++i) {
		printf("%d ", a[i]);
	}

	printf("\n\nPlease enter a number between 0 and 8: ");
	scanf_s("%d", &x);
	printf("\nPlease enter another number between 0 and 8: ");
	scanf_s("%d", &y);

	printf("\n\nI will now swap the numbers at index positions %d and %d of the following array.\n", x, y);

	swap(a, x, y);

	for (int i = 0; i <= 8; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n\n");
}

int swap(int a[], int x, int y) {
	int hold = a[x];
	a[x] = a[y];
	a[y] = hold;

	return a[9];
}