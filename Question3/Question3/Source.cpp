/**************************************
* COMP1411 - Computer Programming I   *
* Lab 2, Question 3                   *
* Matthew Brown, Student ID#: 1126992 *
**************************************/
#include <stdio.h>

//prototype function
int perf(int num);

int main() {
	int num;
	int sum = 0;
	unsigned int count = 0;

	while (count == 0) {
		printf("Please enter a number between 1 and 100: ");
		scanf_s("%d", &num);
		if (num < 1 || num > 100)
			printf("\nI'm sorry, that number is outside of the bounds.\n");
		else
			++count;
	}//end while

	if (perf(num) == 0)
		printf("\n%d is a perfect number.\n", num);
	else
		printf("\n%d is not a perfect number.\n", num);

	return 0;
}//end main

//definition of function
int perf(int num) {
	int sum = 0;

	for (int i = 1; i <= num / 2; ++i) {
		if (num % i == 0)
			sum += i;
	}//end for
	if (sum == num)
		return 0;
	else
		return 1;
}//end perf