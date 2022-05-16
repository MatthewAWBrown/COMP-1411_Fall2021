/**************************************
* COMP1411 - Computer Programming I   *
* Lab 3, Question 1 version 2         *
* Matthew Brown, Student ID#: 1126992 *
**************************************/
#include<stdio.h>
#include<math.h>

int main() {

	int w, x, y, z, a, b, c, d;
	int num;
	int num2;
	unsigned int count = 0;

	while (count == 0) {
		printf("Please enter the lower search term to find Armstrong Numbers: ");
		scanf_s("%d", &num);
		if (num < 1)
			printf("\nThe lower search term cannot be less than 1!");
		else 
			++count;
	}
	while (count == 1) {
		printf("\nPlease enter the upper search term to find Armstrong Numbers: ");
		scanf_s("%d", &num2);
		if (num2 > 1000)
			printf("\nThe lower search term cannot be greater than 1000!");
		else {
			printf("\nI will now search for Armstrong Numbers that fall between %d and %d.\n", num, num2);
			++count;
		}
	}
	
	for (int i = num; i <= num2; ++i) {
		//separate the digits
		w = (i % 10000) / 1000;
		x = (i % 1000) / 100;
		y = (i % 100) / 10;
		z = i % 10;

		//cube the digits
		a = pow(w, 3);
		b = pow(x, 3);
		c = pow(y, 3);
		d = pow(z, 3);

		int sum = a + b + c + d;
		if (sum == i)
			printf("%d is an armstrong number.\n", i);
	}//end for

}//end main