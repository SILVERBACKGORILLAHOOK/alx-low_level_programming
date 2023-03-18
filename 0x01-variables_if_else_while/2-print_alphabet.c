#include <stdio.h>
/**
 * main - entry point
 * description: print a the alphabet in lowercase, followed by a new line
 * return (0) success
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
