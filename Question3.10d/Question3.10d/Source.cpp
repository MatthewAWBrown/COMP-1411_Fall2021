#include <stdio.h>

int main()
{
	int y = 1;
	int num;

	printf("Please enter a number greater than 1:\n");
	scanf_s("%d", &num);

	while (y <= num) {
		printf("%d\n", y);
		++y;
	}//end while
}//end main