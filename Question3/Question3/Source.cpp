/**************************************
* COMP1411 - Computer Programming I   *
* Lab 4, Question 2                   *
* Matthew Brown, Student ID#: 1126992 *
**************************************/
#include <stdio.h>

unsigned long long int fibon(unsigned int n); //prototype function

int main() {
	unsigned int n;
	unsigned int count = 0;

	while (count == 0) {
		printf("Please enter a number: ");
		scanf_s("%d", &n);
		if (n < 1)
			printf("\nI'm sorry, the number must be a positive, nonzero integer.\n");
		else {
			printf("\nI will now find the integer in the fibonacci sequence found at place %d.\n", n);
			++count;
		}
	}//end while

	printf("%d", fibon(n));
}//end main

//function definition
unsigned long long int fibon(unsigned int n) {
	int num = 0;
	int num1 = 1;
	int sum = 0;
	if (n == 1)
		return (0);
	else if (n == 2)
		return (1);
	else {
		for (int i = 3; i <= n; ++i) {
			sum = num + num1;
			num = num1;
			num1 = sum;
		}//end for
		return (sum);
	}
}//end fibon