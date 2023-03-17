#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - enrty point
 * description: printing the last digit of the number n.
 * return:(0) success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);
	printf("%d\n", n % 10);
	return (0);
}
