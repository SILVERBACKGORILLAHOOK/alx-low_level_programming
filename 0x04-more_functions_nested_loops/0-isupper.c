#include "main.h"

/**
 * _isupper - check if c is upper case.
 *
 * @c: is an input of alphabets.
 * Return:(1) if it's upper case, (0) if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
