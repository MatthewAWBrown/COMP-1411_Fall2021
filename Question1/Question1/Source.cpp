/*************************************
* COMP 1411 - Computer Programming I *
* Lab 5, Question 1                  *
* Matthew Brown Student ID# 1126992  *
* ***********************************/
#include <stdio.h>

int main() {
	int a[5];

	for (size_t i = 0; i < 5; ++i) {
		a[i] = 0;
	}

	printf("Please enter 5 numbers (press enter after each number): ");
	for (size_t i = 0; i <= 4; ++i) {
		scanf_s("%d", &a[i]);
	}

	printf("\n\nYou entered %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	printf("Or %d %d %d %d %d in reverse order.", a[4], a[3], a[2], a[1], a[0]);
}//end main