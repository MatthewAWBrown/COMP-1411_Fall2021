/*****************************************
*  COMP 1411 - Computer Programming I    *
*  Assignment 3                          *
*  Matthew Brown, Student ID# 1126992    *
*****************************************/
#include <stdio.h>

int prime(int x); //prtotype function

int main() {
	unsigned int tprime = 0; //count of twin primes
	int x, y; //integer that represent the range to be searched
	int a = 0, b = 0; //variables to store primes and compare for twin primes

	//get the floor and ceiling of range to search for twin primes
	printf("Please enter a number: ");
	scanf_s("%d", &x);
	printf("\nPlease enter another number: ");
	scanf_s("%d", &y);
	printf("\n\n"); //formatting for adding space for computation results

	//computation loop
	for (int i = x; i <= y; ++i) {
		if (a == 0  && prime(i) != 1) //finds and stores the first prime number in the range defined
			a = prime(i);
		if (a != 0 && prime(i) != 1) //finds and stores the second prime number in the range defined
			b = prime(i);
		//compares the two primes found and checks for twin prime status
		if (b - a == 2 || a - b == 2) {
			printf("(%d   %d)   ", a, b);
			++tprime;
		}//end if
		a = b; //shifts value of b to become the value of a
	}//end for loop

	printf("\n\nThere are %d twin primes between %d and %d.\n", tprime, x, y);

}//end main

//prime function definition
int prime(int x) {
	int i, flag = 0;
	
	for (i = 2; i <= x / 2; ++i) {
		if (x % i == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		return(x);
	else
		return(1);
}//end prime