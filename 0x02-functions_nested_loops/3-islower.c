#include "main.h"

/**
 * _islower: determine if an input is,
 * lowercase character.
 * c: is a charachter is ASCII CODE.
 * return value (0) = is an uppercase.
 * returne value (1) = is a lowercase.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
]
