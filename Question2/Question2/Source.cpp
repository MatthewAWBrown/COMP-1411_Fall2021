/**************************************
* COMP1411 - Computer Programming I   *
* Assignment 4, Question 2            *
* Matthew Brown, Student ID# 1126992  *
**************************************/
#include<stdio.h>

int main() {
	int a[10]; 
	unsigned int x = 0;
	int pro;

	for (int i = 1; i <= 20; ++i) {
		if (i % 2 != 0) {
			a[x] = i;
			++x;
		}
	}
	pro = a[0] * a[1] * a[2] * a[3] * a[4] * a[5] * a[6] * a[7] * a[8] * a[9];
	printf("The product of odd integers from 1 to 20 is %d.\n", pro);
}