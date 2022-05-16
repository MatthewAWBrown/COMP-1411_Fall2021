/**************************************
* COMP1411 - Computer Programming I   *
* Lab 2, Question 2                   *
* Matthew Brown, Student ID#: 1126992 *
**************************************/
#include <stdio.h>

int main()
{
	printf("Enter your user name: ");
	char name[10];
	char password[25];

	while (name[10] = getchar()) {
		switch (name[10]) {
		case '\n':
		case '\t':
		case ' ':
			break;
		}
		printf("Enter your password: ");
		while (password[25] = getchar()) {
			switch (password[25]) {
			case '\n':
			case '\t':
			case ' ':
				break;
			}
		}//end while
	}//end while

	if (name[10] == "mbrown16\n" && password[25] == "computerprogrammingrocks\n") {
		printf("You're in!\n");
	}
	else
		printf("I'm sorry, that is not correct.\n");
}//end main