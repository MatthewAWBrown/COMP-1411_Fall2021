/*************************************************
* Computer Science 1411 - Computer Programming I *
* Assignment 1, Question 2.16                    *
* Matthew Brown, Student ID#: 1126996            *
*************************************************/
#include <stdio.h>

int main()
{
	unsigned int counter;
	counter = 1;
	int num1; //first number entered by user
	int num2; //second number entered by user

	while (counter == 1); {
		printf("Enter first number\n");
		scanf_s("%d", &num1);

		printf("Enter second number\n");
		scanf_s("%d", &num2);
		if (&num2 == 0); {
			printf("I'm sorry, but the second number cannot be 0.\n");
			printf("Please enter a non-zero number\n");
			scanf_s("%d", &num2);
		}

		int sum;
		sum = num1 + num2;
		int product;
		product = num1 * num2;
		int difference;
		difference = num1 - num2;
		int quotient;
		quotient = num1 / num2;
		int remainder;
		remainder = num1 % num2;

		printf("The sum of the two numbers entered is %d\n", sum); //print sum
		printf("The product of the two numbers is %d\n", product); //print product
		printf("The difference of the two numbers is %d\n", difference); //print difference
		printf("The quotient of the two numbers is %d\n", quotient); //print quotient
		printf("The remainder of the two numbers is %d\n", remainder); //print remainder

		int again;
		printf("Would you like to try again? 1 = yes, 2 = no\n");
		scanf_s("%d", &again);
		if (again == 2); {
			counter = 2;
		}
	}
}