// COMP1411 - Computer Programming I
// Lab 1, Question 3
// Matthew Brown
// Student ID#: 1126992

#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;

	printf("Please enter three (3) whole numbers (positive or negative): \n");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);

	if (num1 > num2) {
		if (num1 > num3) {
			printf("\n\n");
			printf("%d is the largest number\n", num1);
		}//end if
		else {
			printf("\n\n");
			printf("%d is the largest number\n", num3);
		}//end else
	}// end if
	else if (num2 > num3) {
		printf("\n\n");
		printf("%d is the largest number\n", num2);
	}//end else if
	else {
		printf("\n\n");
		printf("%d is the largest number\n", num3);
	}//end else

}//end main