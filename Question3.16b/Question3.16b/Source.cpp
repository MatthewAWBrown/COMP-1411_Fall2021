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
	float totalgall = 0; 
	float totalmiles = 0;

	printf("Enter the gallons used (-1 to end): ");
	scanf_s("%f", &gall);

	while (gall != -1) {
		printf("Enter the miles driven: ");
		scanf_s("%f", &miles);
		average = miles / gall;
		totalgall = totalgall + gall;// increase the total gallons
		totalmiles = totalmiles + miles;// increase the total miles
		counter = counter + 1;// increment the counter
		printf("The miles/gallon for this tank was %f\n\n", miles / gall);

		printf("Enter the gallons used (-1 to end): ");
		scanf_s("%f", &gall);
	}//end while

	if (counter != 0) {
		printf("\n");
		printf("The overall average miles/gallon was %f\n\n", totalmiles / totalgall);
	}//end if
	else {
		printf("No calculations were entered.\n");
	}//end else

}//end main