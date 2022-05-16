/**************************************
* COMP-1411 Computer Programmin I     *
* Assignment 1, Question 2.30         *
* Matthew Brown, Student ID#: 1126992 *
**************************************/

#include <stdio.h>

int main()
{
	unsigned int count;
	count = 1;
	int num;
	int n = 0;
	
	while (count == 1) {
		printf("Please enter a five (5) digit whole number:\n");

		scanf_s("%d", &num);

		//separating out the digits
		int digi;
		digi = num % 10;//gets digit in ones space
		int digi1;
		digi1 = (num % 100) / 10;//gets digit in tens space
		int digi2;
		digi2 = (num % 1000) / 100;//gets digit in hundreds space
		int digi3;
		digi3 = (num % 10000) / 1000;//gets digit in thousands space
		int digi4;
		digi4 = (num % 100000) / 10000;//gets digit in ten-thousands space

		//printing solution
		printf("\n\n");
		printf("You entered %d as your number.\n", num);
		printf("The digits are:\n");
		printf("%d   %d   %d   %d   %d", digi4, digi3, digi2, digi1, digi);

		//Loop option, run again or exit
		int again;
		printf("\n\n");
		printf("Would you like to try again?\n1 = yes\n2 = no\n");
		scanf_s("%d", &again);
		if (again == 2) {
			count = count + 1;
		}//end if
	}//end while
}//end