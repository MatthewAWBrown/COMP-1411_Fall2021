#include <stdio.h>

int main()
{
	int age;

	printf("Please enter an age: \n");
	scanf_s("%d", &age);

	if (age >= 65)
		puts("Age is greater than or equal to 65\n");
	else
		puts("Age is less than 65\n");
	

}//end main