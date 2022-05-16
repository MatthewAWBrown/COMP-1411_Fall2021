/*************************************
* COMP1411 - Computer Programming I  *
* Lab 6, Question 2                  *
* Matthew Brown, Student ID# 1126992 *
*************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>

int prime(int a); //prototype function

int main() {
	int num[1000];
	int n = 999;

	//initialize the array
	for (int x = 1; x <= 999; ++x) {
		num[x] = x;
	}

	for (int i = 2; i <= n; ++i) {
		int m = 1;
		if (prime(num[i]) == 0) {
			printf("%d  ", num[i]);
			for (int j = pow(i, 2); j <= n;) {
				num[j] = 4; //sets appropriate number in the array to not prime
				j =+ m * i;
				++m;
			}
		}
	}

}//end main

int prime(int a){
	for (int i = 2; i <= a / 2; ++i) {
		if (a % i == 0) {
			return 1;
			break;
		}
	}
	return 0;
}//end prime