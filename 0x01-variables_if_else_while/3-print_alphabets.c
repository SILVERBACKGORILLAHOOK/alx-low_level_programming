#include <stdio.h>
/**
 * main - entry point
 * a script that writes a alphabets lower and upper case followed by \n.
 * Return: (0) success
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
