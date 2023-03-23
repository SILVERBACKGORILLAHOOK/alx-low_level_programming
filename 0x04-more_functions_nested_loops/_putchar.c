#include <unistd.h>
#include "main.h"

/**
 * _putchar writes the charachter c to stdout
 * @c the charachter to print 
 *
 * return: on success 1.
 * reutrn: on erreur -1.
 */

int _putchar(char c)
{
	return (write(1, &c,1));
}
