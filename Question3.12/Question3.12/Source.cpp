#include <stdio.h>

int main()
{
	unsigned int x = 1;
	unsigned int total = 0;
	unsigned int y;

	while (x <= 10) {
		y = x * x;
		printf("%d\n", y);
		total += y;
		++x;
	}//end while

	printf("Total is %d\n", total);
}//end main function