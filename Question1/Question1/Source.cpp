/**************************************
* COMP1411 - Computer Programming I   *
* Lab 3, Question 1                   *
* Matthew Brown, Student ID#: 1126992 *
**************************************/
#include<stdio.h>
#include<math.h>

int main() {

	int num;
	unsigned int count = 0;
	int a, b, c, d, w, x, y, z;

	while (count == 0) {
		printf("Please enter a number between 1 and 1000: ");
		scanf_s("%d", &num);
		if (num < 1 || num > 1000) {
			printf("\nI'm sorry, that number is outside of the bounds.\n");
		}//end if
		else
			++count;
	}//end while

	//separate the digits
	w = (num % 10000) / 1000;
	x = (num % 1000) / 100;
	y = (num % 100) / 10;
	z = num % 10;

	//cube the digits
	a = pow(w, 3);
	b = pow(x, 3);
	c = pow(y, 3);
	d = pow(z, 3);

	int sum = a + b + c + d;
	printf("\n%d + %d + %d + %d = %d", a, b, c, d, sum);
	if (sum == num) {
		printf("\nThe number you entered, %d, is an Armstrong Number! Because %d equals %d.\n", num, num, sum);
	}//end if
	else {
		printf("\nThe number you entered is not an Armstrong Number because %d does not equal %d\n", sum, num);
	}//end else
}//end main