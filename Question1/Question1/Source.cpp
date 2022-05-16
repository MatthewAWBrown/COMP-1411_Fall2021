/**************************************
* COMP1411 - Computer Programming I   *
* Lab 2, Question 1                   *
* Matthew Brown, Student ID#: 1126992 *
* ************************************/

#include <stdio.h>
#include <string.h>

int main() {

	char city[20]; //variable for the entered city name

	//prompt and read information
	printf("Please enter the city you live in: ");
	fgets(city, 20, stdin);

	if (strcmp("Thunder Bay\n", city) != 0) {
		printf("You should come visit Thunder Bay sometime!\n");
	}


}//end main