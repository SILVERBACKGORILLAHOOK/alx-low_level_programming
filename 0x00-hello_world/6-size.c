#include <stdio.h>
/**
 * main - Writing a program that prints the size of different computer types
 * Return: (0) when successful
 */

int main(void)
{
	printf("size of a chart: %i byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)", sizeof(long int));
	printf("size of a long long int: %i byte(s)", sizeof(long long int));
	printf("size of a float: %i byte(s)", sizeof(float));
	return (0);
}
