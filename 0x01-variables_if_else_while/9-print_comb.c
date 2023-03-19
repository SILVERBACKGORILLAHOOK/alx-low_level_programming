#include <stdio.h>
/**
 * main - entry point.
 * prints all possible combinations of single-digit numbers.
 * return value: (0) success.
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
