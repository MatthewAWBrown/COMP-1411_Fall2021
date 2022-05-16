/*****************************************
* COMP1411 - Computer Programming I      *
* Lab 7                                  *
* Matthew Brown, Student ID# 1126992     *
*****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int removeDuplicates(int array[], int size, int unique[]); //remove duplicates prototype
void swap(int* a, int* b); //swap function prototype
int partition(int unsorted_array[], int low, int high); //partition prototype
void quicksort(int unsorted_array[], int left_index, int right_index); //quicksort prototype
void printArray(int array[], int size); //print array prototype

int main() {
	srand(time(0));
	int random_array[40];
	
	//generate an array of random numbers
	for (int i = 0; i < 40; ++i) {
		random_array[i] = rand() % 21;
	}

	printf("Random Array:\n");
	printArray(random_array, 40);

	//remove duplicates and sort the array
	int sorted_array[40];
	int sorted_array_size = removeDuplicates(random_array, 40, sorted_array);

	printf("\nThe array has been sorted and duplicates have been removed.\n");
	printArray(sorted_array, sorted_array_size);
	
}//end main

int removeDuplicates(int array[], int size, int array2[]) {
	quicksort(array, 0, size - 1);
	int previous = array[0], j = 1;
	array2[0] = array[0];
	for (int k = 1; k < size; ++k) {
		if (previous != array[k])
			array2[j++] = array[k];
		previous = array[k];
	}
	return j;

}//end removeDuplicates

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}//end swap

int partition(int unsorted_array[], int left_index, int right_index) { 
	int pivot = unsorted_array[right_index];
	int i = (left_index - 1);

	for (int j = left_index; j < right_index; ++j) {
		if (unsorted_array[j] <= pivot) {
			++i;
			int temp = unsorted_array[i];
			swap(&unsorted_array[i], &unsorted_array[j]);
		}
	}
	swap(&unsorted_array[i + 1], &unsorted_array[right_index]);
	return (i + 1);
}//end partition

void quicksort(int unsorted_array[], int left_index, int right_index) {

	if (left_index < right_index) {
		int p = partition(unsorted_array, left_index, right_index);

		quicksort (unsorted_array, left_index, p - 1);
		quicksort (unsorted_array, p + 1, right_index);
		}
}//end quicksort

void printArray(int array[], int size) {
	for (int i = 0; i < size; ++i) {
		printf("%d. %d\n", (i + 1), array[i]);
	}
	printf("\n");
}//end printArray