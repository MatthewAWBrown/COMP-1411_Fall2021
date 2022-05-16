/*************************************
* COMP1411 - Computer Programming I  *
* Lab 5, Question 2                  *
* Matthew Brown, Student ID# 1126992 *
*************************************/
#include<stdio.h>

int main() {
	int a[3];

	printf("Please enter 3 numbers (press enter after each number): ");
	for (size_t i = 0; i <= 2; ++i) {
		scanf_s("%d", &a[i]);
	}

	printf("\n\nI will now find the sum of the numbers you entered.\n");
	printf("%d + %d + %d = %d", a[0], a[1], a[2], a[0] + a[1] + a[2]);
}//end main