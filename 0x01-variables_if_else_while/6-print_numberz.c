#include <stdio.h>
/**
 * main - entry point
 * description: prints all single digit numbers of base 10 starting from 0.
 * return(0) success
 */
int main()
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
