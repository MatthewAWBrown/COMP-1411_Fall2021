/*************************************************
* Computer Science 1411 - Computer Programming I *
* Assignment 2, Question 3.16                    *
* Matthew Brown, Student ID#: 1126996            *
*************************************************/

#include <stdio.h>

int main()
{
	unsigned int counter = 0; //number of miles/gallon calculations entered
	float miles; //miles driven variable
	float gall; //gallons variable
	float average; //average veriable
	float total = 0; //Sum of all miles/gallon calculations performed

	printf("Enter the gallons used (-1 to end): ");
	scanf_s("%f", &gall);

	while (gall != -1) {
		printf("Enter the miles driven: ");
		scanf_s("%f", &miles);
		average = miles / gall;
		total = total + average;// increase the total miles/gallon
		counter = counter + 1;// increment the counter
		printf("The miles/gallon for this tank was %f\n\n", miles / gall);
		
		printf("Enter the gallons used (-1 to end): ");
		scanf_s("%f", &gall);
	}//end while

	if (counter != 0) {
		printf("\n");
		printf("The overall average miles/gallon was %f\n\n", total / counter);
	}//end if
	else {
		printf("No calculations were entered.\n");
	}//end else

}//end main