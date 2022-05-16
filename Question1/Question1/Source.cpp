/**********************************************
* COMP1411 - Computer Programming I           *
* Lab 6, Question 5                           *
* Matthew Brown, Student ID# 1126992          *
**********************************************/
#include<stdio.h>
#include<string.h>


int testPalindrome(char str[], int s, int e); //prototype function

int main() {
	char str[] = "amanaplanacanalpanama";

	int n = strlen(str);

	if (testPalindrome(str, 0, n - 1) == 1)
		printf("Yes! You entered a palindrome.\n");
	else
		printf("I'm sorry, that is not a palindrome.\n");

}//end main

int testPalindrome(char str[], int s, int e) {
	int n = strlen(str);
	if (n == 0) //an empty string is considered a palindrome
		return 1;
	if (s == e) //a string of a single letter is a palindrome
		return 1;
	if (str[s] != str[e]) //if the first and last letters do not match, it cannot be a palindrome.
		return 0;
	for (s = 0; s <= e; ++s) {
		if (str[s] != str[e]) {
			return 0;
			break;
		}
		if (str[s] == str[e]) {
			--e;
		}
	}
	return 1;
}//end testPalindrome