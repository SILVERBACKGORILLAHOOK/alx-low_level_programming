#include <stdio.h>
/**
 * main - print a the alphabet in lowercase, followed by a new line
 * description: without using (printf, puts, etc…)
 */

int main()
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
}
