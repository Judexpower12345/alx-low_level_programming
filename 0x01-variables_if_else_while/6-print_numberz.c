#include <stdio.h>

/**
 * main - Print all single digit numbers.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
