/**************************************
* COMP-1411 Computer Programming I    *
* Assignment 1, Question 2.18         *
* Matthew Brown, Student ID#: 1126992 *
**************************************/

#include <stdio.h>

int main()
{
	unsigned int count;
	count = 1;
	int num1;
	int num2;
	int num3;

	while (count == 1) {
		printf("Please enter three whole numbers\n");
		printf("and I will tell you the sum, average, product of those three numbers\n");
		printf("as well as the smallest and largest of them.\n");
		printf("\n\n");

		scanf_s("%d %d %d", &num1, &num2, &num3);

		int sum;
		sum = num1 + num2 + num3;
		int average;
		average = (num1 + num2 + num3) / 3;
		int product;
		product = num1 * num2 * num3;

		printf("\n\n");
		printf("Sum is %d\n", sum);
		printf("Average is %d\n", average);
		printf("Product is %d\n", product);


		//smallest calculation
		if (num1 < num2 && num1 < num3) {
			printf("%d is the smallest\n", num1);
		}//end if
		else if (num2 < num1 && num2 < num3) {
			printf("%d is the smallest\n", num2);
		}//end else if
		else {
			printf("%d is the smallest\n", num3);
		}//end else


		//largest calculation
		if (num1 > num2 && num1 > num3) {
			printf("%d is the largest\n", num1);
		}//end if
		else if (num1 < num2 && num2 > num3) {
			printf("%d is the largest\n", num2);
		}//end else if
		else {
			printf("%d is the largest\n", num3);
		}//end else
	
		
		int again;
		printf("\n\n");
		printf("Would you like to try again?\n 1 = yes\n 2 = no\n");
		scanf_s("%d", &again);
		if (again == 2) {
			count = count + 1;
		}//end if
	}//end while
}