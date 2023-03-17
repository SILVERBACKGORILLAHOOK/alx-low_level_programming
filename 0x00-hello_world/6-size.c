#include <stdio.h>
/**
 * main - Writing a program that prints the size of different computer types
 * Return: (0) when successful
 */

int main(void)
{
	printf("size of a chart: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf("size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
