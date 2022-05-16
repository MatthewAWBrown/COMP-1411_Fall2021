/**************************************
* COMP1411 - Computer Programming I   *
* Lab 2, Question 3 version 2         *
* Matthew Brown, Student ID#: 1126992 *
**************************************/
#include <stdio.h>

//prototype function
int perf(int x);


int main() {
	int num;
	int num2;
	unsigned int count = 0;

	while (count == 0) {
		printf("Please enter the lower number for search field: ");
		scanf_s("%d", &num);
		if (num < 1)
			printf("\nI'm sorry, the number cannot be less than one!\n");
		else
			++count;
	}//end while
	while (count == 1) {
		printf("\nPlease enter the upper number for the search field: ");
		scanf_s("%d", &num2);
		if (num2 > 100)
			printf("\nI'm sorry, the number cannot be greater than 100!\n");
		else {
			++count;
			printf("\nI will now search for perfect numbers between %d and %d.\n", num, num2);
		}//end else
	}//end while

	for (int x = num; x <= num2; ++x) {
		perf(x);
		if (perf(x) == 0)
			printf("%d ", x);
	}
}//end main

//definition of function
int perf(int x) {
	int sum = 0;

	for (int i = 1; i <= x / 2; ++i) {
		if (x % i == 0)
			sum += i;
	}
	if (sum == x)
		return 0;
	else
		return 1;
}//end perf