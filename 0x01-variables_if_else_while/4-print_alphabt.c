#include <stdio.h>
/**
 * main: entry point
 * Print all the letters except q and e, followed \n
 * return: (0) success
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
