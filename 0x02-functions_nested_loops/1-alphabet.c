#include "main.h"

/**
 * main : Entry point.
 * a function that prints the alphabet, lowercase, followed by \n.
 * return value: (0) > successful.
 */

int print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
