#include "main.h"

/**
 * main entry point 
 * print_alphabet_*10_times: print alphabet ten times.
 * return value (0) success
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
