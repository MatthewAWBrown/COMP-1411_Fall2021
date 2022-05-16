/************************************************
* COMP1411 - Computer Programming I             *
* Lab 8, Question 3                             *
* Matthew Brown, Student ID# 1126992            *
************************************************/
#include <stdio.h>
#define SIZE 10

void swap(int a[], int b[]);

int main() {
	int a[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int b[] = { 0, 9, 8, 7, 5, 5, 4, 3, 2, 1 };

	//Print Array A
	printf("The first array consists of:\n");
	for (int i = 0; i < SIZE; ++i) {
		printf("%d\t", a[i]);
	}
	printf("\n");

	//Print Array B
	printf("The second array consists of:\n");
	for (int i = 0; i < SIZE; ++i) {
		printf("%d\t", b[i]);
	}
	printf("\n\n");

	swap(a, b);
	printf("I will now swap the arrays!\n");
	//Print Array A
	printf("Now the first array consists of:\n");
	for (int x = 0; x < SIZE; ++x) {
		printf("%d\t", a[x]);
	}
	printf("\n");

	//Print Array B
	printf("and the second array consists of:\n");
	for (int x = 0; x < SIZE; ++x) {
		printf("%d\t", b[x]);
	}
	printf("\n");

}//end main

void swap(int a[], int b[]) {
	for (int i = 0; i < SIZE; ++i) {
		*(a + i) = *(a + i) ^ *(b + i);
		*(b + i) = *(a + i) ^ *(b + i);
		*(a + i) = *(a + i) ^ *(b + i);
	}
}//end swap