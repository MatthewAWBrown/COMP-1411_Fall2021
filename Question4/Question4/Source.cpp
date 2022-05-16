/**************************************
* COMP1411 - Computer Programming I   *
* Lab 2, Question 4                   *
* Matthew Brown, Student ID#: 1126992 *
**************************************/
#include <stdio.h>

int main() {
	int x;//spaces
	int y;//stars
	
	//for loop building a triangle
	for (x = 1; x <= 5; ++x) {
		for (y = 1; y <= 5 - x; ++y) 
			printf(" ");
		for (y = 1; y <= 2 * x - 1; ++y)
			printf("*");
		printf("\n");
	}//end for

	//loop for mirrored triangle (making it a diamon)
	for (x = 1; x <= 4; ++x) {
		for (y = 1; y <= x; ++y)
			printf(" ");
		for (y = 1; y <= 2 * (5 - x) - 1; ++y)
			printf("*");

		printf("\n");
	}//end for
}//end main