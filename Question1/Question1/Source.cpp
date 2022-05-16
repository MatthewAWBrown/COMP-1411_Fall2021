/********************************************
* COMP1411 - Computer Programmin I          *
* Assignment 4, Question 1                  *
* Matthew Brown, Student ID# 1126992        *
********************************************/
#include<stdio.h>

int main() {
	int a[3];

	printf("Please enter three numbers (press enter after each number): ");
	for (int i = 0; i <= 2; ++i) {
		scanf_s("%d", &a[i]);
	}

	printf("You entered ");
	for (int i = 0; i <= 2; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n\n%d + %d + %d = %d\n", a[0], a[1], a[2], a[0] + a[1] + a[2]);
	printf("%d is the average of the numbers entered.\n", (a[0] + a[1] + a[2]) / 3);
	printf("%d x %d x %d = %d\n", a[0], a[1], a[2], a[0] * a[1] * a[2]);

	if (a[0] < a[1] && a[0] < a[2])
		printf("%d is the smallest.\n", a[0]);
	else if (a[1] < a[0] && a[1] < a[2])
		printf("%d is the smallest.\n", a[1]);
	else
		printf("%d is the smallest.\n", a[2]);

	if (a[0] > a[1] && a[0] > a[2])
		printf("%d is the largest.\n", a[0]);
	else if (a[1] > a[0] && a[1] > a[2])
		printf("%d is the largest.\n", a[1]);
	else
		printf("%d is the largest.\n", a[2]);

}//end main