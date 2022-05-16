/*************************************************
* Computer Science 1411 - Computer Programming I *
* Assignment 2, Question 3.18                    *
* Matthew Brown, Student ID#: 1126996            *
*************************************************/

#include <stdio.h>

int main()
{

	unsigned int counter = 0;
	float sales; 
	float salary;

	printf("Enter sales in dollars (-1 to end): ");
	scanf_s("%f", &sales);

	while (sales != -1) {
		salary = sales * 0.09;
		++counter;
		printf("Salary is: $%.2f\n\n", salary + 200);

		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &sales);
	}//end while

	if (counter == 0) {
		printf("No calculations were entered.\n");
	}//end if

}//end main