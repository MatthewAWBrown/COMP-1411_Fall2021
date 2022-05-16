/****************************************
* COMP1411 - Computer Programming I     *
* Lab 8, Question 1                     *
* Matthew Brown, Student ID# 1126992    *
****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int search(int* const ptr, int* key, size_t low, size_t high); //prototype search
void swap(int* a, int* b); //prototype swap
void bubbleSort(int* const array, const size_t size); //prototype bubbleSort
void printHeader(); //prototype printHeader
void printRow(int* const ptr, size_t low, size_t mid, size_t high); //prototype printRow

int main() {
	srand(time(0)); //initialize random seed
	int array[10]; //initialize array
	int x; //search key variable
	int* ptr = array; //pointer to array

	//build the array
	for (int i = 0; i < 10; ++i) {
		array[i] = rand() % 101;
	}

	printf("I have built an array of 10 random numbers between 0 and 100 (inclusive).\n");
	printf("Please enter a number between 0 and 100: ");

	//get the search key
	scanf_s("%d", &x);

	printf("\n");

	//print the array in its original form
	printf("The original array:\n");
	for (int x = 0; x < 10; ++x) {
		printf("%d  ", array[x]);
	}

	printf("\n\n");

	//print header and indices identifiers
	printHeader();

	size_t result = search(ptr, &x, 0, 9);

	//print the result
	printf("\n\n");
	if (result != -1)
		printf("%d was found at index %d\n\n", x, result);
	else
		printf("%d was not found.\n\n", x);


}//end main

int search(int* const ptr, int* key, size_t low, size_t high) {
	bubbleSort(ptr, high);

	while (low <= high) {
		size_t middle = (low + high) / 2;

		printRow(ptr, low, middle, high);

		if (*key == ptr[middle])
			return middle;
		else if (*key < ptr[0])
			return -1;
		else if (*key < ptr[middle])
			high = middle - 1;
		else
			low = middle + 1;
	}
	return -1; //key not found
	
}//end search

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}//end swap

void bubbleSort(int* const array, const size_t size) {
	for (unsigned int pass = 0; pass < size; ++pass) {
		for (size_t j = 0; j < size; ++j) {
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
		}
	}
}//end bubbleSort

void printHeader() {
	printf("Indices:\n");

	for (int k = 0; k < 10; ++k) {
		printf("%3u ", k);
	}
	printf("\n");//new line 

	for (int l = 0; l < 40; ++l) {
		printf("%s", "-");
	}
	printf("\n");//new line
}

void printRow(int* const ptr, size_t low, size_t mid, size_t high) {
	for (size_t i = 0; i <= high; ++i) {
		if (i < low || i > high)
			printf("%s", "    ");
		else if (i == mid)
			printf("%3d*", ptr[i]);
		else
			printf("%3d ", ptr[i]);
	}
	printf("\n");//new line
}//end printRow