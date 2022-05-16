// COMP1411 Computer Programming I
// Lab 1, Question 2
// Matthew Brown
// Student ID#: 1126992

#include<stdio.h>

int main()
{
	int num;

	printf("Please enter a whole number (it can be positive or negative): \n");
	scanf_s("%d", &num);

	if (num < 0) {
		printf("The number you entered, %d, is negative.\n", num);
	}//end if
	else {
		printf("The number you entered, %d, is positive.\n", num);
	}//end else

}//end main