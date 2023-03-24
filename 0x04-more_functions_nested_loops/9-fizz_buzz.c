#include "main.h"

/**
 * main - fizz_buzz print numbers 1 - 100 followed by new line
 * numbers that are multiples of 3 print Fizz
 * numbers that are multiplies of 5 print buzz
 * numbers that are multiplies of 3 and 5 print FizzBuzz
 * each number and word to be seperated by space
 * Return: (0) success
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num & 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
