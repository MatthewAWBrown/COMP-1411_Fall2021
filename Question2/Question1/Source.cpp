/*******************************************************
* COMP1411 - Computer Programming I                    *
* Lab 9, Question 1                                    *
* Matthew Brown, Student ID# 1126992                   *
*******************************************************/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

void swap(int* a, int* b);
int partition(int array[], int left_index, int right_index);
void quicksort(int array[], int left_index, int right_index);

int main() {
	int array[] = { 41, 56, 23, 78, 12, 7, 243, 23 };
	int* pointer = array;
	int** ptr2 = (int**)malloc(8 * sizeof(int));

	for (int i = 0; i < SIZE; ++i) {
		ptr2[i] = pointer + i;
	}

	//print the array before sorting
	printf("Before sorting:\n");
	for (int i = 0; i < SIZE; ++i) {
		printf("Number: %d \t Address: %p\n", *(pointer + i), *(pointer + i));
	}
	printf("\n\n");

	//print the array with double pointers
	printf("Using double pointers:\n");
	for (int i = 0; i < SIZE; ++i) {
		printf("Number: %d \t Address: %p\n", *(ptr2[i]), (ptr2 + i));
	}
	printf("\n\n");

	//sort the array
	quicksort(*ptr2, 0, SIZE - 1);

	//print the array after sorting
	printf("After sorting:\n");
	for (int i = 0; i < SIZE; ++i) {
		printf("Number: %d \t Address: %p\n", *(pointer + i), *(pointer + i));
	}
	printf("\n\n");

	printf("Using double pointers:\n");
	for (int i = 0; i < SIZE; ++i) {
		printf("Number: %d \t Address: %p\n", *(ptr2[i]), (ptr2 + i));
	}

}//end main

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}//end swap

int partition(int array[], int left_index, int right_index) {
	int pivot = array[right_index];
	int i = (left_index - 1);

	for (int j = left_index; j < right_index; ++j) {
		if (array[j] < pivot) {
			++i;
			int temp = array[i];
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[right_index]);
	return (i + 1);
}//end partition

void quicksort(int array[], int left_index, int right_index) {
	if (left_index < right_index) {
		int p = partition(array, left_index, right_index);

		quicksort(array, left_index, p - 1);
		quicksort(array, p + 1, right_index);
	}
}//end quicksort