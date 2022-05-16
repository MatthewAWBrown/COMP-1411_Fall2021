// COMP1411 - Computer Programming I
// Lab 1, Question 4
// Matthew Brown
// Student ID#: 1126992

#include <stdio.h>

int main()
{
	int num;
	int count;
	int prime;
	int again;
	int answer;


	//initialization phase
	count = 2; //will try to divide entered number by 2 as first test for prime status
	prime = 1; //set prime condition to true
				
	//request and read entered information
	printf("Please enter a positive whole number less than 100.\n");
	scanf_s("%d", &num);

	//test entered number condition
	if (num < 0) {
		printf("I'm sorry, the number must be positive.\n");
		printf("Please enter a positive whole number less than 100.\n");
		scanf_s("%d", &num);
	}//end if
	if (num > 100) {
		printf("I'm sorry, the number must be less than 100.\n");
		printf("Please enter a positive whole number less than 100.\n");
		scanf_s("%d", &num);
	}//end if

	//assessment phase
	while (count < num) {
		if (num % count == 0) {
			prime = 0;//sets prime status to false
			break;//break out of the while loop
		}//end if
		count++;//increments the count
	}//end while

	//results 
	if (prime == 1) {
		printf("\n\n");
		printf("%d is a prime number\n", num);
	}//end if
	else {
		printf("\n\n");
		printf("%d is not a prime number\n", num);
	}//end else

}//end main