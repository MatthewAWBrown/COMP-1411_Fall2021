/************************************************
* COMP1411 - Computer Programming I             *
* Lab 8, Question 3                             *
* Matthew Brown, Student ID# 1126992            *
************************************************/
#include <stdio.h>
#define SIZE 10

void swap(int a[], int b[]);

int main() {
	int a[10];
	int b[10];

	printf("Please enter 10 integers into the first array (press enter after each entry):\n");
	for (int i = 0; i < SIZE; ++i) {
		scanf_s("%d", &a[i]);
	}
	printf("\n\n");
	printf("Please enter 10 integers into the second array (press enter after each entry):\n");
	for (int i = 0; i < SIZE; ++i) {
		scanf_s("%d", &b[i]);
	}

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