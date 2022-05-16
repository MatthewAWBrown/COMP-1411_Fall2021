/**************************************
* COMP - 1411 Computer Programming I  *
* Assignment 1, Question 2.16         *
* Matthew Brown, Student ID#: 1126996 *
**************************************/
#include <stdio.h>

int main()
{
	unsigned int count;
	count = 1;
	int num1; //first number entered by user
	int num2; //second number entered by user

	while (count == 1) { //while loop, allows from the program to run multiple times without needing to be relaunched
		printf("Enter a whole number\n");//user enters the first number
		scanf_s("%d", &num1);

		printf("Enter a second whole number\n");//user enters the second number
		scanf_s("%d", &num2);
		if (num2 == 0) { //conditional statement because having the second number be 0 will cause a crash due to the program trying to divide by 0
			printf("I'm sorry, but the second number cannot be 0.\n");
			printf("Please enter a non-zero number\n");
			scanf_s("%d", &num2);
		}//end if

		int sum; //definition of sum
		sum = num1 + num2;
		int product; //definition of product
		product = num1 * num2;
		int difference; //definition of difference
		difference = num1 - num2;
		int quotient; //definition of quotient
		quotient = num1 / num2;
		int remainder; //definition of remainder
		remainder = num1 % num2;

		printf("The sum of the two numbers entered is %d\n", sum); //print sum
		printf("The product of the two numbers is %d\n", product); //print product
		printf("The difference of the two numbers is %d\n", difference); //print difference
		printf("The quotient of the two numbers is %d\n", quotient); //print quotient
		printf("The remainder of the two numbers is %d\n", remainder); //print remainder
		printf("\n\n");

		//Loop option section, user chooses whether or not to run the program again
		int again;
		printf("Would you like to try again?\n 1 = yes\n 2 = no\n");
		scanf_s("%d", &again);
		if ( again == 2 ) {
			count = count + 1;
		}//end if
	}//end while
}