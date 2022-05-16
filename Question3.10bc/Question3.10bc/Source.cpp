#include <stdio.h>

int main()
{
	int x = 1;
	int total = 0;

	while (x <= 100) {
		printf("%d\n", x);
		total += x;
		++x;
	}//end while

	printf("The total is %d\n", total);

}//end main