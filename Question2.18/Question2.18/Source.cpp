/**************************************
* COMP-1411 Computer Programming I    *
* Assignment 1, Question 2.18         *
* Matthew Brown, Student ID#: 1126992 *
**************************************/

#include <stdio.h>

int main()
{
	//primes the while loop
	unsigned int count;
	count = 1;
	int num1; //first number entered by user
	int num2; //second number entered by user

	while (count == 1) {
		printf("Enter a whole number\n");
		scanf_s("%d", &num1);

		printf("Enter another whole number\n");
		scanf_s("%d", &num2);

		if (num1 > num2) {
			printf("\n\n");//formatting linebreaks
			printf("%d is larger than %d\n", num1, num2);
		}//end if
		if (num1 < num2) {
			printf("\n\n");//formatting linebreaks
			printf("%d is larger than %d\n", num2, num1);
		}//end if
		if (num1 == num2) {
			printf("\n\n");//formatting linebreaks
			printf("%d is equal to %d\n", num1, num2);
		}//end if

		//Loop option section, user chooses whether or not to run the program again
		int again;
		printf("\n\n");
		printf("Would you like to try again\n 1 = yes\n 2 = no\n");
		scanf_s("%d", &again);
		if (again == 2) {
			count = count + 1;
		}//end if
	}//end while
}