#include <stdio.h>

/**
 * main - prints the largest prime factors of 612852475143
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long i, number = 612852475143;

	for (i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
