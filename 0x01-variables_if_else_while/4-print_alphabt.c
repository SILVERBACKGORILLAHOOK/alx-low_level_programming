#include <stdio.h>
/**
 * main 
 * description: Write a program that prints the alphabet in lowercase, followed by a new line
 * return: (0) success
 */
int main()
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
}
