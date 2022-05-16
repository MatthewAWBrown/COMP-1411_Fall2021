/**************************************
* COMP1411 - Computer Programming I   *
* Lab 2, Question 3                   *
* Matthew Brown, Student ID#: 1126992 *
**************************************/
#include<stdio.h>

int main() {
	int sum = 0;
	int x = 100;
	
	for (unsigned int x = 100; x <= 300; ++x) {
		if (x % 2 == 0) {
			continue;
		}
		sum += x;
	}//end for
	printf("The sum of all of the odd numbers between 100 and 300 is %u", sum);
}//end main