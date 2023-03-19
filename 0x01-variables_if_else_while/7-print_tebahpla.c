#include <stdio.h>
/**
 * main - entry point.
 * prints the lowercase alphabet in reverse, followed by a new line.
 * return value: (0) success
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
