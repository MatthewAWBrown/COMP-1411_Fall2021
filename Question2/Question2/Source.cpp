/**************************************
* COMP1411 - Computer Programming I   *
* Lab 3, Question 2                   *
* Matthew Brown, Student ID#: 1126992 *
**************************************/
#include <stdio.h>

//funtion prototype
void swap(int *, int *);

int main() {
	int a;
	int b;

	printf("Please enter a number: ");
	scanf_s("%d", &a);
	printf("\nPlease enter another number: ");
	scanf_s("%d", &b);

	printf("\nYou entered %d and %d.\n", a, b);
	swap(&a, &b);
	printf("or %d and %d once swapped.\n", a, b);
}//end main

//swap function definition
void swap(int *x, int *y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
