/****************************************
* COMP1411 - Computer Programming I     *
* Lab 8, Question 1, version 2          *
* Matthew Brown, Student ID# 1126992    *
****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int search(int* array, int* key);

int main() {
	srand(time(0)); //initialize random seed
	int array[10]; //initialize array
	int key; //variable for search key
	int* ptr = array; //pointer to array

	//build the array
	for (int i = 0; i < SIZE; ++i) {
		array[i] = rand() % 101;
	}

	printf("I have built an array of 10 random numbers between 0 and 100 (inclusive).\n");
	printf("Please enter a number between 0 and 100: ");

	//get the search key
	scanf_s("%d", &key);

	printf("\n\n");

	//print the array in its original form
	printf("The array:\n");
	for (int x = 0; x < 10; ++x) {
		printf("%d  ", array[x]);
	}

	int result = search(ptr, &key);

	//print the result
	printf("\n\n");
	if (result != -1)
		printf("%d was found at index %d\n\n", key, result);
	else
		printf("%d was not found.\n\n", key);


}//end main

int search(int* array, int* key) {
	for (int i = 0; i < SIZE; ++i) {
		if (*(array + i) == *key) {
			return i; //index of element 
			break;
		}
	}
	return -1; //key not found
} //end search