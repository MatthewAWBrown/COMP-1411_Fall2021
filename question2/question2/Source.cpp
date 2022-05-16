/******************************************
* COMP1411 - Computer Programming I       *
* Lab 8, Question 2                       *
* Matthew Brown, Student ID# 1126992      *
******************************************/
#include <stdio.h>

void addMatrices(int a[3][3], int b[3][3], int c[3][3]);

int main() {
	int matrixA[3][3] = {
		{10, 20, 30},
		{40, 50, 60},
		{70, 80, 90}
	};
	int matrixB[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int matrixC[3][3] = {
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};

	//print Matrix A
	printf("The first matrix:\n");
	//print row 1
	for (int i = 0; i < 3; ++i) {
			printf("%d\t", *(*(matrixA + 0) + i));
	}
	printf("\n");
	//print row 2
	for (int i = 0; i < 3; ++i) {
		printf("%d\t", *(*(matrixA + 1) + i));
	}
	printf("\n");
	//print row 3
	for (int i = 0; i < 3; ++i) {
		printf("%d\t", *(*(matrixA + 2) + i));
	}
	printf("\n\n");
	
	//print Matrix B
	printf("The second matrix:\n");
	//print row 1
	for (int j = 0; j < 3; ++j) {
			printf("%d\t", *(*(matrixB + 0) + j));
		}
	printf("\n");
	//print row 2
	for (int j = 0; j < 3; ++j) {
		printf("%d\t", *(*(matrixB + 1) + j));
	}
	printf("\n");
	//print row 3
	for (int j = 0; j < 3; ++j) {
		printf("%d\t", *(*(matrixB + 2) + j));
	}
	printf("\n\n");

	//add the two matrices together
	addMatrices(matrixA, matrixB, matrixC);

	//Print the sum
	//print row 1
	printf("The sum of the two matrices:\n");
	for (int x = 0; x < 3; ++x) {
			printf("%d\t", *(*(matrixC + 0) + x));
		}
	printf("\n");
	//print row 2
	for (int x = 0; x < 3; ++x) {
		printf("%d\t", *(*(matrixC + 1) + x));
	}
	printf("\n");
	//print row 3
	for (int x = 0; x < 3; ++x) {
		printf("%d\t", *(*(matrixC + 2) + x));
	}
	printf("\n\n");


}//end main

void addMatrices(int a[3][3], int b[3][3], int c[3][3]) {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			*(*(c + i) + j) = (*(*(a + i) + j)) + (*(*(b + i) + j));
		}
	}
}//end addMatrices