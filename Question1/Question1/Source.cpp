/**************************************
* COMP 1411 - Computer Programming I  *
* Lab 4, Question 1                   *
* Matthew Brown, Student ID# 1126992  *
**************************************/
#include <stdio.h>

int power(int b, int e); //function prototype

int main() {
	int base;
	int exponent;
	unsigned int count = 0;

	printf("Please enter the base: ");
	scanf_s("%d", &base);
	
	while (count == 0) {
		printf("\nPlease enter the exponent value: ");
		scanf_s("%d", &exponent);
		if (exponent < 1)
			printf("\nI'm sorry, the number cannot be less than 1!\n");
		else {
			++count;
			printf("\nI will now find the product of %d to the power of %d\n", base, exponent);
		}//end else
	}//end while

	printf("%d\n", power(base, exponent));
}//end main


//function definition
int power(int b, int e) {
	int fin = 0;
	int pro = b * b;
	for (int i = 1; i <= e - 2; ++i) {
		int sum = pro * b;
		pro = sum;
		fin = sum;
	}
	return (fin);
}//end power