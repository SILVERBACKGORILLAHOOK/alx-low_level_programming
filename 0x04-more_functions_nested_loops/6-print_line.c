#include "main.h"

/**
 * print_line - printing a straight line.
 *
 * @n: is the number of times the _ charachter printed
 */

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar(98);
		_putchar('\n');
	}
}
