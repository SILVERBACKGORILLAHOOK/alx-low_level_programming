#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * description: print the last digit of the number n.
 * Return: (0) successful operation
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if (n % 10 > 5)
		printf("Last digit os %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 < 6)
		printf("Last digit of %d is %d and is less 6 and not 0\n", n, n % 10);
	return (0);
}
