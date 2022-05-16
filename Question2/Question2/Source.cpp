/**************************************
* COMP1411 - Computer Programming I   *
* Lab 4, Question 2                   *
* Matthew Brown, Student ID#: 1126992 *
**************************************/
#include<stdio.h>

int gcd(long a, long b); //function prototype

int main() {
	int a, b; 
	printf("Please enter a number: ");
	scanf_s("%d", &a);
	printf("\nPlease enter another number: ");
	scanf_s("%d", &b);

	printf("\nThe greatest Common Divisor is %d", gcd(a, b));
}

//function definition
int gcd(long a, long b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}//end gcd