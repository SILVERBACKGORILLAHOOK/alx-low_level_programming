#include "main.h"

/**
 * print_numbers - print from 0 to 9
 * only using _putchar twice
 *
 * Return: Always (0) succsess.
 */

void print_numbers(void)
{
	int n = 0;

	do {
		_putchar(n + 48);
		n++;
	} while (n >= 0 && n <= 9);
	_putchar('\n');
}
